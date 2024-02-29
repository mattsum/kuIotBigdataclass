#include <stdio.h>

int main(void)
{
	//int score1, score2, score3, score4, score5;
	int scores[5];
	
	//scanf("%d", &score1);
	//scanf("%d", &score2);
	//scanf("%d", &score3);
	//scanf("%d", &score4);
	//scanf("%d", &score5);
										//50개 쓸거를 한번에 for반복문으로 줄임
	//scanf("%d", &scores[0]);
	//scanf("%d", &scores[1]);
	//scanf("%d", &scores[2]);
	//scanf("%d", &scores[3]);
	//scanf("%d", &scores[4]);		//배열 - 같은형의 여러개를 쓸려면? 그게 아니면 변수
	
	for (int i = 0; i < 5; ++i ) {
		scanf("%d", &scores[i]);
	}
	//int sum = score1 + score2 + score3 + score4 + score5;
	int sum;
	sum = 0;
	for (int i = 0; i < 5; ++i) {
		sum = sum + scores[i];
	}
	double average = (double)sum/ 5;
		
	printf("sum: %d\taverage: %.2f\n", sum, average);
	return 0;
}	

