#include <stdio.h>
#define N 14
main()
{
    int i, j, k, n=0, a[N][N];  
    while(n<=0||n>=14){  //控制打印的行数
        printf("请输入要打印的行数：");
        scanf("%d",&n);
    }
    printf("%d行杨辉三角：\n",n);
    for(i=1;i<=n;i++)
        a[i][1] = a[i][i] = 1;  //两边的数令它为1
    for(i=3;i<=n;i++)
        for(j=2;j<=i-1;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];  //除两边的数外都等于上两顶数之和 
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++)
            printf("   ");  
        for(j=1;j<=i;j++) 
            printf("%6d",a[i][j]);
        
        printf("\n"); 
    }
    printf("\n");
}
