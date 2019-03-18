#include<stdio.h>
int main(){
	int i,a;
	int sum=1;
	
	int count = 0;
 	int k;
    int j = 0;
        
	scanf("%d",&a);
	for(i=1;i<=a;i++)
		sum=sum*i;
	
	printf("%d的阶乘是%d",a,sum);
    for ( k = 1; k <= a; ++k){
        j = k;
        while(j%5 == 0)
            {
                ++count;
                j = j/5;
            }
        }
     
       printf("\n%d的阶乘结果尾数有%d个0",a,count);
}
//给定一个整数 n，返回 n! 结果尾数中零的数量。
