#include <stdio.h>
//#include <stdlib.h>
#include <time.h>
#include "rand."		//현재작업하는디렉토리에서 가져오기 하고싶을때는 " " 써야한다.

						//function declaration (함수 선언)
						//랜덤파일 - 해더파일 나오는 이유

int main(void)
{
/*	int seed;
	srand(time(NULL), &seed);
	seed = 0;
	int value = rand(&seed);
*/
	my_srand(time(NULL));
	for (int i = 1; i <= 10; ++i) {
		int value = my_rand();
		
		printf("value : %d\n", value);
	}
	return 0;
}


 
