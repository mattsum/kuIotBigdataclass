#include <stdio.h>
void swap(int *ap, int *bp) {

	int tmp = *ap;
	*ap = *bp;
	*bp = tmp;
	
}

	int main(void) {
		int a, b;
		a = 100;
		b = 200;
		printf("a: %d\tb: %d\n", a, b);
		
		swap(&a, &b);
		
		printf("a: %d\tb: %d\n", a, b);
		return 0;
	}

