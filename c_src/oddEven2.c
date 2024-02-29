#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	if (num % 2 /* == 1 */) { 			//요런형태로 주석문을 또 쓸수도 있다.
		printf("%d is a odd\n", num);
	} else {
		printf("%d is a even\n", num);
	}
	
	return 0;
}
