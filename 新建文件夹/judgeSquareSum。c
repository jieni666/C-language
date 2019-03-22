#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool judgeSquareSum(int c) 
{
    int n=(int)sqrt(c);//强制转换 
    int left=0;
    int right=n;
    while(left<=right)
    {
        int tmp=left*left+right*right;
        if(c==tmp)
        {
            return true;
        }
        if(tmp>c)
        {
            right--;
        }
        if(tmp<c)
        {
            left++;
        }
    }
    return false;
}
int main(){
   	int m;
   	scanf("%d",&m);
	judgeSquareSum(m);
}
//给定一个非负整数 c ，你要判断是否存在两个整数 a 和 b，使得 a^2 + b^2 = c。
