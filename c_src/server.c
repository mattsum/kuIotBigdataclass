#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>		
#include <string.h>
#include <assert.h>
#include <pthread.h>
#include <netinet/in.h>
#define MAX_USER 100

pthread_mutex_t mutex;

int dataSockets[MAX_USER];
int numberOfClients;
void *client_proc(void *arg)	//thread의 실행단위는 함수이고, 
	/*clone_func*/				//Thread로 인해서 사용될함수는 인자나 결과값이 뭐인지 모르기때문에
									//반환타입을 Void포인터로 쓴다. 
									//arg ---> 메인속에 있는 데이터소켓을 가르킨다.
{	
	int dataSocket = *(int *)arg;	
	for(;;) {
		char buf[1024];						
		int nread = read(dataSocket, buf, 1024); 	//1024라는 뜻은 최대로 읽어올수 있는 크기.
		if (nread == 0) {							//1024개를 읽는다는 뜻이 아니다. 
		// end of file, in client close(dataSocket)
			break;
		} else if (nread == -1) {
			//error is occured!
			break;
		} else {
		//buf msg ---> all clients!
pthread_mutex_lock(&mutex);
			for (int i = 0; i < numberOfClients; ++i) {
			write(dataSockets[i], buf, nread);
			}
		//read(dataSocket, ) / write(dataSocket, );
pthread_mutex_unlock(&mutex);
		}
	}
	
pthread_mutex_lock(&mutex);
	for (int i = 0; i < numberOfClients; ++i) {
		if (dataSocket == dataSockets[i]) {
			for (int j = i; j < numberOfClients -1; ++j) {
			dataSockets[j] = dataSockets[j+1];
			}
			break;
		}
	}
	--numberOfClients;
pthread_mutex_unlock(&mutex);	
	
	close(dataSocket/*fd*/);
	return NULL;			
}

int main(void)
{
	pthread_mutex_init(&mutex, NULL);
	int servSocket = socket(AF_INET, SOCK_STREAM,0);		//file desciptor? 배열의 index
	assert(servSocket != -1);
	
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servAddr.sin_port = htons(7777);
	//servAddr.sin_zero = ???
	
	assert( bind(servSocket, (struct sockaddr *)&servAddr, sizeof(servAddr)) == 0);
	
	assert( listen(servSocket, 5) == 0);
	
	
	for(;;) { 				//무한반복을 의미함
		int addrLen;
		struct sockaddr_in clientAddr;
		
		int dataSocket = accept(servSocket, (struct sockaddr *)&clientAddr, &addrLen);	
										//지역변수를 다른 곳에 쓸수 없다.
		assert(dataSocket != -1);		//datasocket을 인자로 전달함.

pthread_mutex_lock(&mutex);		
		dataSockets[numberOfClients] = dataSocket;
		++numberOfClients;
pthread_mutex_unlock(&mutex);		
		
		printf("client ip : %s\n", inet_ntoa(clientAddr.sin_addr));		
		
		// make the clone! 분신 ---> read / write block!
		pthread_t PId;									
		pthread_create(&PId, NULL, client_proc, &dataSocket);		//주소를 전달했기에 		
		
	}
	
	
	
close(servSocket);
pthread_mutex_destroy(&mutex);
return 0;
}
