#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 5; ++i) {
	for (int j = 1; j <= 5; ++j) {
/*	if (j == i || j == (6 - i)) {		//주석처리 한 부분은 if else 사용해 정리한것이고,
	printf("*");							
	} else {
	printf(" ");}
	}
*/
	printf((i == j || i + j ==6) ? "*" : " ");		//대표님께서 적어주신 부분은 선택형에서 삼항연산자 ? "-" "-" 이용해 수식정리함.
	}
	printf("\n");
}
	return 0;
}
