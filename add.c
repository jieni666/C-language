#include <stdio.h>
int main()	
{
	int x;
	scanf("%d",&x);
	int i;
	int ret=0;//ret��ÿһ�ν���������Ľ�� 
	while(x>0){
		i = x%10;//ȡ��ÿһλ
		printf("%d",i); 
		ret=ret*10+i;
		x /= 10;//�����һλ������
	}
	return 0;
}
 


