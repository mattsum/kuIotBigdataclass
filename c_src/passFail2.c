#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	
	
/*																	 	//     */여러줄 주석 처리하는 방법 */
	if (score >=60) {
		printf("score : %d ---pass\n", score);
	} else {
		printf("score : %d ---fail\n", score);
	}
*/	
	
	printf("score : %d --- %s\n", (score >= 60) ? "pass" : "fail");  //조건식연산자를 사용한다[연산식]
	return 0;																		//
}
