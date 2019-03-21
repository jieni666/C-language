#include<stdio.h>
void moveZeroes(int* nums, int numsSize) {
    int i,j=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[j++]=nums[i];
        }
    }
    for(j;j<numsSize;j++)
        nums[j]=0;
}
int main()
{
	int num[] = { 0,1,0,3,2,0,12 };
	int len = sizeof(num) / sizeof(int);
	moveZeroes(num, len);
	int m,n;
	for ( m = 0; m <len; m++)
	{
		printf("%d ", num[m]);
	}
	printf("\n");
}
//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
