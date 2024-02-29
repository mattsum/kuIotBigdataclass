#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);
	
	int isLeap;
	isLeap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
	//isLeap = (year % 400 = 0 || year % 4 == 0 && year % 100 != 0 );
	
	printf("%d is a leap : %d\n", year, isLeap);
	return 0;
	
}	
	
	//윤년이면 1출력 평년이면 0출력 하는 함수 만들기
