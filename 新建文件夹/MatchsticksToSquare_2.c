#include<stdio.h>
#include<stdbool.h>
    bool makesquare(int* nums, int numsSize) {
    int i,ret=0;
    for(i=0;i<numsSize;i++){
    	ret += nums[i];
	}
	if(ret%4==0){
 		return true; 
   	}else 	return false;  
  }	
	int main()	{ 
	int num[] = {1,1,2,2,2};
	int len = sizeof(num) / sizeof(int);
	int a = makesquare(num, len);
	printf("%d\n", a);
	system("pause");
	return 0;
	}
//现在，你知道小女孩有多少根火柴，请找出一种能使用所有火柴拼成一个正方形的方法。
//不能折断火柴，可以把火柴连接起来，并且每根火柴都要用到。
//输入为小女孩拥有火柴的数目，每根火柴用其长度表示。输出即为是否能用所有的火柴拼成正方形。
