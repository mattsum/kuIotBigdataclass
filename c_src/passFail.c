#include <stdio.h>

int main(void)
{
	int score;

	printf("input score : ");
	scanf("%d", &score);
	
	int isPass = score >= 60;
	
	
	printf("score: %d - pass : %d\n", score, isPass);
	return 0;
}

// 60점이상이면 합격인지 불합격인지 함수만들기
