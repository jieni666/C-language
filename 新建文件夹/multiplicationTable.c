#include <stdio.h>
int main()	
{
	int n=9;
	int i,j;
	while (i<=n){
		j=1;
		while(j<=i){
			printf("%d*%d=%d",j,i,i*j);
			if(i*j<10){
				printf("   ");
			}
			else{
				printf("  ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}
 
//99乘法表
