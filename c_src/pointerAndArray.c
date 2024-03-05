#include <stdio.h>

int main(void)
{
	int nums[5] = {1, 2, 3, 4, 5};
	int *p;
					// p = &nums[0];
	p = nums;		// p = 배열이름은 식에서 사용되면 첫번째 엘리먼트의 시작주소를 의미한다.
	
	printf("*p : %d\n", *p);
	++p;
	printf("*p : %d\n", *p);
	
	
	p = nums;
	
	printf("*(p + 2) : %d\n", *( p + 2 )); //포인터 +1 은 다음엘리먼트를 가르킨다는 뜻을 의미한다.
	return 0;
}
