#include <stdio.h>
#include "serial.h"			//헤더파일 "   "  
int main(void)
{
	for (int i = 0; i <= 10; ++i) {
		int number = getSerialNumber();
		printf("BENZ_EQ300_%010d\n", number);
	}

	for (int i = 0; i <= 5; ++i) {
		int number = getSerialNumber();
		printf("BENZ_EQ300_%010d\n", number);
	}

	
	return 0;
}