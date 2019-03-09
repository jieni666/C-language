#include <stdio.h>
#include <stdbool.h>
int main()	
{
bool isPalindrome(int x)
	{
	   	int ret=0;
	   	int i;
	    int	num=x;
		scanf("%d",&x);
		  	if (x < 0)
			    {
			        return false;
			    }
			    
			    if (x == 0)
			    {
			        return true;
			    }
    

	    while(x){
	    	i = num%10;
			printf("%d",i); 
			ret=ret*10+i;
			num /= 10;
			}
	}
	return 0;	
}
 

