#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3];
	
	srand(time(NULL));
	question[0] = rand() % 9 +1;
	
	do {								   	//반복체크문에서 do - while문 적용함
		question[1] = rand() % 9 + 1;
		} while (question[0] == question[1]);
		
	do {
		question[2] = rand() % 9 + 1;
		} while (question[0] == question[2] || question[1] == question[2]);
				
	//printf("question : %d %d %d\n", question[0], question[1], question[2]);
	
	int strike = 0; 
	int ball = 0;
	int count = 0;
	
	while (strike != 3) {
		strike = ball = 0;
		++count;
		
		int answer[3];
		printf("input answer : ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		
		 for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (question[i] == answer[j]) {  //strike or ball
                    if (i == j) {
                        ++strike;
                    } else {
                        ++ball;
                    }
                }
            }
        }
		//#strike, #ball
	
		printf("#strike : %d\t#ball : %d\n", strike, ball);
			
		if (strike == 3) 
			break;
	}
	
	printf("congraturation. your count : %d\n", count);
	
	return 0;
	
}
