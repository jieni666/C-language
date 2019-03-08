#include <stdio.h>
int main()	
{
	int i,j;
	int numsSize=4;
	int nums[] = {2,7,11,15}, target = 9; 
	for (i=0; i <numsSize - 1; i++)
	{
		for (j = i+1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
			
				printf("%d",i);
				printf("%d",j);
				printf("%d",target);
			}
		}
	}
	return 0;
}
 

