#include <stdio.h>

int main(void)
{
		for (int i = 'A' ; i <= 'Z'; ++i) {
		printf("%c", i);
	}
	printf("\n");
	
	return 0;
	}
/*
{
	char c;
	c = (char)'A';
	while (c <= 'Z') {
		printf("%c", (int)c);
		++c; 
	}
	printf("\n");
*/	
