#include <stdio.h>
int  main()	
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
/***********************
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 
两个 整数，并返回他们的数组下标。你可以假设每种输入只会对应一个答案。但是，
你不能重复利用这个数组中同样的元素。给定 nums = [2, 7, 11, 15], target = 9
*******************************/
