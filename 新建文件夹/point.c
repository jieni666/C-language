#include<stdio.h>
#define N 5
void main(){
	int a[N],*p=a,*q=a+N-1,i,j;
	printf("输入N值",N);
	for(i=0;i<N;i++)
		scanf("%d",p+i);
		for(;p<q;p++,q--){
			j=*p;
			*p=*q;
			*q=j; 
		}
		printf("\n结果是");
		for(i=0,p=a;i<N;i++)
			printf("%d",*(p+i));
}
//指针实现一维数组反序输出 
