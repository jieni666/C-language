#include <stdio.h>
int main()	
{
	
	int x;
	scanf("%d",&x);
	int i;
	int ret=0;//ret是每一次结果倒过来的结果 
	while(x>0){
		i = x%10;//取出每一位
		printf("%d",i); 
		ret=ret*10+i;
		x /= 10;//将最后一位数丢掉
	}
	return 0;
}
 


