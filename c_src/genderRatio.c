#include <stdio.h>

int main(void)
{
	int man, woman;
	scanf("%d %d", &man, &woman);
	//double man, woman;
	//scanf("%lf %lf", &man, &woman);
	
	//double manRatio = 1.0 * man / (man + woman) * 100; 
	//double womanRatio = (0.0 + woman / (man + woman) * 100;     // 10,11,12,13 다 같은표현인데 double로 표현
	double manRatio = (double)man / (double)(man + woman) * (double)100; 
	double womanRatio = (double)woman / (man + woman) * 100;
	
	
	
	printf("#man : %d\tman Ratio; %.2f%%\n", man, manRatio);
	printf("#woman : %d\twoman Ratio; %.2f%%\n", woman, womanRatio);
	
	return 0;
	
}
      //[수업중 과제 GenderRatio를 구하라, 남자수 여자수 + 남자의비율, 여자의비율 구하기.]
      //명시적인변화 
