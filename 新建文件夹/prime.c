#include <stdio.h>
int main()	
{
	int i,m,n;
	int cnt=0;
	int sum=0;
		
	scanf("%d %d",&m,&n);
	if(m==1){
		m=2;
	}
	for(i=m;i<=n;i++){
		int prime = 1;
		int j;
		for(j=2;j<i-1;j++){
			if(i%j==0){
				prime=0;
				break;
			}
		}
			if(prime){
				cnt++;
				sum+=i;
		}
	}

	 printf("区间内素数个数为%d 它们的和为%d\n",cnt,sum);
	 return 0;
}
 

