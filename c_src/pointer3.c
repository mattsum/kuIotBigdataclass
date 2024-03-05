#include <stdio.h>

int main(void)
{
	int a = 0x12345678;
	
	//int *p;
	//p = &a;
	char *p;		//int형 char를 변형하는법
	p = (char *)&a;		
		
	printf("*p : 0x%x\n", *p);
	return 0;
	
}
	
