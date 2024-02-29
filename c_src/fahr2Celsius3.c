#include<stdio.h>

int main(vold)
{
	int fahr;
	fahr = 100;
	int celsius = (fahr - 32) * 5 * 100 / 9;
	
	printf("fahr: %d ---> celsious: %d.%d\n", fahr, celsius / 100);
	return 0;
}

