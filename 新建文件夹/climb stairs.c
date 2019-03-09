#include <stdio.h>
int main()	
{
	int n;
    int sum=0,p2=2,p3=3;
    scanf("%d",&n);
    if(1==n){
    	printf("有1种方式");
    	return n;
	}
	
    if(2==n){
    	printf("有2种方式");
    	return n;
	} 
    if(3==n){
    	printf("有3种方式");
    	return n;
	} 
    while(n>3)
    {
    	sum=p2+p3;
    	p2=p3;
    	p3=sum;
    	n--;
    }
      printf("有%d种方式",sum);
      return sum;
}
/*******************************************
假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

注意：给定 n 是一个正整数。
*********************************************/
