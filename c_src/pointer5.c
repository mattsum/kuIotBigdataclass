#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}	

int substract(int a, int b)
{	
	return a - b;
}
	
int main(void)
{
	int (*fp)(int, int);		//*fp
	
	fp = &add;
	int re = (*fp)(4, 3);
	printf("re: %d\n", re);
	
	fp = substract;		//이렇게도 작성할 수 있다.
	re = fp(4, 3);
	//fp = &substract;		
	//re = (*fp)(4, 3);
	printf("re: %d\n", re);

	return 0;
	
}
	
