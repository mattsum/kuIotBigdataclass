#include <stdio.h>

int findValueInArray(const int *pArr, int size, int value)
{

	int i;
	for (i =0; i < size; ++i) {
		if (value == pArr[i]) {
			break;
		}
	}
	
	int index = (i < size) ? i : -1;
	return index;
	
	//return (i < size) ? i : -1;
}

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	int value;
	printf("input value : ");
	scanf("%d", &value);
	
	int index = findValueInArray(nums, 10, value);
	
	if (index != -1) {
		printf("%d is found, index : %d\n", value, index);
	} else {
		printf("%d is not found.\n", value);
	}
	
	return 0;
	
}
