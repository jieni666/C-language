#define N 3
#define M 4
#include<stdio.h>
void main()
{
	int i,j,a[N][M],(*p)[4];
	p=a;
	
	for(i=0;i<N;i++){
		printf("\n请输入a[%d][0]~a[%d][%d]:",i,i,M-1);
		 for(j=0;j<M;j++)
		 	scanf("%d",*(p+i)+j);
		 }
	printf("\n请输入 i j(0<=i<%d,0<=j<%d):",N,M);
	scanf("%d %d",&i,&j);
	printf("\na[%d][%d]=%d",i,j,*(*(p+i)+j));	 
}
//通过一维数组的指针p引用a[i][j] 
