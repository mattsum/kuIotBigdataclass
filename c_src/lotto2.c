#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int balls[45];
	
	for (int i = 0; i < 45; ++i) {
		balls[i] = i + 1;
	}
	srand(time(NULL));			// shrffle
	for (int count = 1; count <= 1000000; ++count) {
		int i = rand() % 45;
		int j = rand() % 45;
		
		int tmp = balls[i];
		balls[i] = balls[j];
		balls[j] = tmp;
	}	
	
	for (int i = 0; i < 7; ++i) {
		printf("%2d ", balls[i]);		//자리 맞출려고 %2를 해준 것! 결과값 가독성을 위해서
	}
	printf("\n");
	
	return 0;
}
