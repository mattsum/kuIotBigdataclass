#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	char grade;
	//grade = ???;
	if (score >= 90) {
		grade = 'A';
	} else if (score >= 80) {
		grade = 'B';
	} else if (score >= 70) {
		grade = 'C';
	} else if (score >= 60) {
		grade = 'D';
	} else {
		grade = 'F';
	}	
	printf("score : %d --- grade : %c\n", score, grade);
			//if(score >= 90) {
	//	printf("score : %d --- A\n", score);
		//A
	//} else if (score >= 80 /*&& score < 90*/) { 					//80점 이상 90점 미만 표현
	//	printf("score : %d --- B\n", score);
		//B
	//} else if (score >= 70) {
	//	printf("score : %d --- C\n", score);
		//C
	//} else if (score >= 60) {
	//	printf("score : %d --- D\n", score);
		//D
	//} else {
	//	printf("score : %d --- F\n", score);
		//F
		
	return 0;
	
}

