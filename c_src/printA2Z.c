#include <stdio.h>

int main(void)
/*{
	int i;
	i = 'A';
		while (i <= 'Z') {
		printf("%c", i);
		++i;
	}
	printf("\n");
	
	return 0;
	}
*/
{
	char c;
	c = (char)'A';
	while (c <= 'Z') {
		printf("%c", (int)c);
		++c; 
	}
	printf("\n");
	
	return 0;
}
