#include <stdio.h>
int main()
{
	
	 int j,numsSize;
	 int nums[] = {2,7,11,15};
     int target = 9;
	 int i;
 	for(i=0 ; i < 4; i++)
	{
		for ( j = i+1; j < 4; j++)
		{
			if ((nums[i] + nums[j]) == target)
			{
				nums[0] = i;
				nums[1] = j;
			printf("%d",&nums);
			}
		}
	}
	return 0;
}

