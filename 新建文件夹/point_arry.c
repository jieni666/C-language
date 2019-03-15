#define N 5
#include<string.h>
#include<stdio.h>
void main()
{
	int i,j;
	char *t;
	char *str[]={
		"monitor",
		"landscape",
		"paddle",
		"partition",
		"current"
	};
	for(i=1;i<N;i++)
		for(j=0;j<N-i;j++)
			if(strcmp(str[i],str[j+1])<0)
				{
					t=str[j];
					str[j]=str[j+1];
					str[j+1]=t;
				}	
	for(i=0;i<N;i++)
	printf("\n%s",str[i]);
}
