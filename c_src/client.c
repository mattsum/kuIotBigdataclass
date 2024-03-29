#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <pthread.h>
#include <assert.h>
#include <string.h>

//키보드로 부터 Send Message, 서버로 부터 받는 receieve message; thread 두개를 써서 만든 Client.c
//받은만큼 출력하고, 받은데이터 뒤에 백슬레스0를 붙이고 프린트F써서 출력하게 만듬.
//파일의 끝을 만나거나 같은 역할을 한다.
//
void *send_msg(void *arg)
{
	int dataSocket = *(int *)arg;
	for (;;) {
	char buf[1024];
	fgets( buf, 1024, stdin);					//한 줄을 받을때 쓰는 함수 fgets()
	
	if (strcmp(buf, "/quit\n") == 0) {
		break;
		}
	write(dataSocket, buf, strlen(buf));
	}
	close(dataSocket);	//데이터소켓을 닫음
}

void *recv_msg(void *arg)
{
	int dataSocket = *(int *)arg;
	
	for(;;) {
		char buf[2014];
		int nread = read(dataSocket, buf, 1024);
		
		if (nread == 0) {			//EOF, close(dataSocket); 결과값이 0 | 이 경우 연결을 종료함.
			break; 
		} else if (nread == -1) {	//read함수가 오류를 반환하면 -1이 리턴된다. 이 경우 연결을 종료함.
			break;
		} else {
			buf[nread] = '\0';		//버퍼에서 읽은 마지막 위치에 NULL 중단 문자를 추가하여 문자열을 완성함.
			printf("%s", buf);		//버퍼에 저장된 데이터를 화면에 출력한다.
		}	
	}
	return NULL;
}
int main(void)
{
	int dataSocket = socket(AF_INET, SOCK_STREAM, 0);		//서버쪽에서도 데이터 소켓을 닫도록... 
	assert(dataSocket != -1);
	
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	servAddr.sin_port = htons(7777);
	assert ( connect(dataSocket, (struct sockaddr *)&servAddr, sizeof(servAddr)) != -1); //의문임 == 0, or != -1인지??

	//read(dataSocket, ??? ) / write(dataSocket, ??? );
	pthread_t pId1, pId2;
	pthread_create(&pId1, NULL, send_msg, &dataSocket);
	pthread_create(&pId2, NULL, recv_msg, &dataSocket);
	
	/* for(;;) {
		;
	}	//main thread가 "죽지 않고 계속 돌아간다는 뜻" */
	
	//이중포인터는 언제쓰는가? ---> 단일포인터를 가르킬때 쓴다.
	pthread_join(pId1, NULL);
	pthread_join(pId2, NULL);	
	
	//close(dataSocket);
	return 0;
}
