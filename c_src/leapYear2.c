#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);
	
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d is a leap year\n", year);
	} else {
		printf("%d is a ordinary year\n", year);
	}
/*
	printf("%d is a %s year\n", year,
	(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? "leap" : " ordinary");
	//가독성이 떨어지니까 이경우, 위쪽을 사용할꺼 같다.
*/	
	return 0;
}
