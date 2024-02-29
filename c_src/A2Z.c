#include <stdio.h>

int main(void)
{
	//int code;
	//scanf("%d", &code);     //문자로 저장할때에는 char 쓴다.
	char code;
	scanf("%c", &code);
	
	
	//int isBig = (code >= 65 && code <= 90);  이렇게써도 되고 밑에처럼 적어도 된다.
	int isBig = (code >= 'A' && code <= 'Z');
	
	printf("%c --- is big : %d\n", code, isBig);
		
	return 0;
}

//A-Z 
