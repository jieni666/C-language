#include<stdio.h>
int main(){	
	int num[] = {2,3,5,6};
	int len= sizeof(num) / sizeof(int);
	int tar;
	scanf("%d",&tar);
	int a = searchInsert(num, len,tar);
	printf("%d\n", a);
} 
	int searchInsert(int* nums, int numsSize, int target) {
    	int i;
		   for(i=0;i<numsSize;i++){
    		if(target<=nums[i]){
    			return i;
		   	}
			     else if(target<nums[i+1]&&target>nums[i]){
				      numsSize+1;
			      	target=nums[i+1];
		     	}
			
		 }
  }
     //给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
	   // 如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
     //你可以假设数组中无重复元素。
