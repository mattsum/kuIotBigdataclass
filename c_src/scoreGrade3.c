#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	char grade;
	switch (score / 10) {							//Switch Case 써서 나타내는 새로운 수식
	case 10:						
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default: 	//5,4,3,2,1,0 //케이스중 나머지 처리할때 디폴트를 쓴다.
		grade = 'F';
		//break;
	}
	printf("score : %d --- grade : %c\n", score, grade);		//print써서 새롭게 쓰는 법
	return 0;
	
}
