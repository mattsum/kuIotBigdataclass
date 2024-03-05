#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	//int nums[6] = {0};		//배열 초기화
	int nums[7] = {0};
	
	srand(time(NULL));
	for (int i = 1; i <= 1000; ++i) { 
		int dice = rand() % 6 + 1;
		//++nums[dice-1];		//주사위 눈의 빈도 수 증가_ "(dice -1)++"
		//nums[dice-1] = nums[dice-1] + 1; //seed ramdom dice 1000개(time(NULL)) 랜덤함수
		++nums[dice];				
						
/*								
	for (int i = 0; i < 6; ++i) { 
		printf("%d --- %d\n", i + 1, nums[i]);
*/	}

}	
	for (int i = 1; i <= 6; ++i) {
		printf("%d -- %d\n", i, nums[i - 1]);
		
	}
	return 0;

}
