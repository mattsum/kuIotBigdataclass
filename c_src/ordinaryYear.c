#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);
	
	int isOrdinary;
	//isOrdinary = !(year % 4 == 0 && year % 100 != 0 || year % 400 == 0); 윤년식에서 !만 붙여도 된다.
	isOrdinary = (year % 4 != 0 || year % 100 == 0 && year % 400 != 0);
	
	printf("%d is a ordinary : %d\n", year, isOrdinary);
	return 0;
	
}	
	
	//평년이면 1출력 윤년이면 0출력 하는 함수 만들기 //터미널에서 cp 하면 카피하는 단축기 //파일편집기에서 Ctrl+h는 = 찾아서 바꾸기
