#include <stdio.h>
int main()	
{
	/**int removeElement(int* nums, int numsSize, int val ,int m) {
		  
 		for(m=0;m<numsSize;m++)  
        		{  
        			printf("����������\n");  
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
			printf("����Ӧ�÷����µĳ���Ϊ:%d",i);
	  
}
