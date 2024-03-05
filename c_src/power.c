#include <stdio.h>

long long power(int base, int exponent)				//long long int 
{
	long long result = 1LL;
	for (int i = 1; i <= exponent; ++i) {
	result = result * base;
	}

	return result;
}
int main(void)
{
	for (int i = 0; i <= 32; ++i) {			//32비트라 2의 32승을 다 표현하지못해서..
		long long result = power(2, i);		//32비트라 다 읽을수 없어서 64비트로 늘려준다.
		
		printf("2 power of %d :%lld\n", i, result);
	}
	
	return 0;
}


