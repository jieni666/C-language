#include <stdio.h>
	int fibonaci(int i)
	{
	   if(i == 0)
	   {
	      return 0;
	   }
	   if(i == 1)
	   {
	      return 1;
	   }
	   return fibonaci(i-1) + fibonaci(i-2);
	}
	 
	int  main()
	{
	    int i,n;
	    printf("请输入");
	    scanf("%d",&n);
	    for (i = 0; i <n; i++)
	    {
	       printf("%d\t\n", fibonaci(i));
	    }
	    return 0;
}
//使用递归函数生成一个给定的数的斐波那契数列：
