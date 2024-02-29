#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 5; ++i) {		//왜 책에서는 i++인데 대표님은 왜? ++i라고 표현하시는가?
	for (int j = 1; j <= 5-i; ++j){		//기계어 코드로 바뀌면 다 똑같은데 의미적으로 변수를 표현할때 
												//C++언어 연산자 중복을 알고 있다면 앞에 붙일것 입니다. 
		printf(" "); 
		}
	for (int k = 1; k <= 2*i-1; ++k) {
		printf("*");}
		printf("\n");	}

	return 0;
}
