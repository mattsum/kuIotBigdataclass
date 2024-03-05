#include <stdio.h>

int main(void)			//void* 순수하게 주소값을 저장하기 때문
{
	int a = 100;
	double d = 3.14;
		
	void *p;
	
	p = &a;
	//*p = 200; 		//가르키는 대상의 타입캐스팅을하고 역참조를 한다.
	*(int *)p = 200;
	
	p = &d;
	*(double *)p = 2.718;
	
	printf("a : %d\n", a);
	return 0;
	
}
	
