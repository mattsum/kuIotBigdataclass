#include <stdio.h>

int a, b;				//함수 밖에서 쓴 변수는 전역변수(global var.)라고 한다. - 함수밖에서 접근해주고 모든함수들이 다 접근가능하다. 프로그램시작할떄 만들어지고 끝날떄 사라진다.
						//함수 안에서 쓴 변수는 지역변수(local var.)라고 한다. - 함수블럭안에서 사용하는것 - 함수가 만들어질때 만들어지고 끝날때 사라진다.
						//전역 변수를 사용할떄의 장점? 인자전달 오버해드를 줄일수 있다. 단점 스파게티코드가 된다
						//지역 변수는 함수블럭안에서 독립적으로 변경하는 지역변수를 되도록이면 쓰자. (전역변수 쓰지말길)
void swap()
{
	int tmp = a;
	a = b;
	b = tmp;
}	

int main(void) 
{
	a = 100;
	b = 200;
	printf("a:%d\tb: %d\n", a, b);
	
	swap();
	
	//swap
			
	printf("a: %d\tb: %d\n", a, b);
	
	return 0;
	
}
