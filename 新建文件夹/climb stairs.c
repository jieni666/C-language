#include <stdio.h>
int main()	
{
	int n;
    int sum=0,p2=2,p3=3;
    scanf("%d",&n);
    if(1==n){
    	printf("��1�ַ�ʽ");
    	return n;
	}
	
    if(2==n){
    	printf("��2�ַ�ʽ");
    	return n;
	} 
    if(3==n){
    	printf("��3�ַ�ʽ");
    	return n;
	} 
    while(n>3)
    {
    	sum=p2+p3;
    	p2=p3;
    	p3=sum;
    	n--;
    }
      printf("��%d�ַ�ʽ",sum);
      return sum;

}
