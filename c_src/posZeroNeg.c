#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	if (num > 0) {
		printf("%d is a positive number\n", num);
	} else if (num == 0) {
		printf("%d is a zero number\n", num);	 //  훨씬 간결하게 정리해서 쓰는 법 (가독성)
	} else {
 		printf("%d is negative number\n", num);
	}

	// printf("%d is a %s number\n", num,
	//		(num > 0) ? "positive" : (num == 0) ? "zero' : "negative");
	// 컨디셔널익스프레스 형태로 이렇게 바꿀수 있다는것을 수업중 새롭게 함. 
	// 하지만 가독성면에 있어서 위에 함수를 쓰기로 함.


	//printf("%d is a positive number\n", num);
	//or
	//printf("%d is a zero number\n", num);
	//or
	//printf("%d is negative number\n", num);
	
	return 0;
	
}

