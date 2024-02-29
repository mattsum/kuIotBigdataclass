#include <stdio.h>
#define BOLD 		(0x01	<< 0)		// 0000 0001
#define ITALIC 	(0x01 	<< 1)		// 0000 0010
#define SHADOW 	(0x01	<< 2)		// 0000 0100
#define UL 		(0x01	<< 3)		// 0000 1000		//매크로 상수를 정리할때 뒤에 괄호를 쓴다.

int main(void)
{
	unsigned char attr;
	attr = attr ^ attr;					// 0000 0000
	attr = attr | BOLD;					// 0000 0001
	attr = attr | (ITALIC + SHADOW);	// 0000 0111
	attr = attr & ~BOLD; 				//0xFE
	
	//printf("attr: 0x%08x\n", (int)attr);
	printf("attr: 0x%02x\n", (int)attr);
	return 0;
}

//int a = 100;
//printf("%d", a);
//char a = 100;
//printf("%d", (int)a);

//캐릭터형을 만드는 식. 숨어있는것을 봐야한다.16진수 한자리를 2진수 한자리로~
//매크로 상수는 BOLD 대문자로 쓴다. 컴파일하기전에 전처리로 처리됨.
