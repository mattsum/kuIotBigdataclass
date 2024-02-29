#include <stdio.h>

int main(void)
{
	int sum;
	sum = 0;
	int i;
	i = 2;
		while (i <= 100) {
		sum = sum + i;
		i = i + 2; 
}
	printf("sum even num[1, 100] : %d\n", sum);
	 
/*	int num = 1;
	int sum = 0;
	
		while (num <= 100) {
			if (num % 2 == 0) {
			sum += num; }
			num++;}

	printf("1 - 100, %d\n", sum);
*/	
	return 0;
}

