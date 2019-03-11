#include <stdio.h>
int main()	
{
	/**int removeElement(int* nums, int numsSize, int val ,int m) {
		  
 		for(m=0;m<numsSize;m++)  
        		{  
        			printf("请输入数组\n");  
     				scanf("%d",&nums[m]);  
      		    }
	    if(numsSize == 0)
	        return 0;
	    int i = 0;
	    int j; 
	    for( j = 0 ; j < numsSize ; j++)
	    {
	        if(nums[j] != val)  
	        {
	            nums[i++] = nums[j];
	        }
	    }
	    return i;
	  
}**/
	int numsSize=8;
    int nums[] = {0,1,2,2,3,0,4,2};
	int val = 2;
	    if(numsSize == 0)
	        return 0;
	    int i = 0;
	    int j; 
	    for( j = 0 ; j < numsSize ; j++)
	    {
	        if(nums[j] != val)  
	        {
	        	printf("%d ",nums[j]); 
	            nums[i++] = nums[j];	
			 	           
	        }	    
	    }	
		printf("函数应该返回新的长度为:%d",i);  
}
/****************************
给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
不要使用额外的数组空间，给定 nums = [0,1,2,2,3,0,4,2], val = 2.
