#include <stdio.h>

int main (void)
{

	int a, b;
	scanf("%d %d", &a, &b);
	
	int result = a > b;
	
	printf("%d > %d : %d\n", a, b, a > b);
	printf("%d < %d : %d\n", a, b, a < b);
	printf("%d >= %d : %d\n", a, b, a >= b);
	printf("%d <= %d : %d\n", a, b, a <= b);
	printf("%d == %d : %d\n", a, b, a == b);
	printf("%d != %d : %d\n", a, b, a != b);
	
	return 0;
	
} 

  //비교 (compare)예제 대표님과 함께 예제 만들어 본 것
