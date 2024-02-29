#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	int isOdd = (num % 2 == 1);
	//int isOdd = (num % 2 != 0);			//8,9,11 3가지 다 같은걸 의미하는 수식. 
												//3가지다 비교해보면서 다시 한번 공부하자
	//int isOdd = num % 2;
		
	printf("num: %d --- is odd : %d\n", num, isOdd);
	return 0;
}

// 홀수 100일땐 0 101일일땐 1을 표현할려고할때 함수
