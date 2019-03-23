#include<stdio.h>
#include<stdbool.h>
bool isPowerOfThree(int n) {
    if(n < 1)
        return false;
    while(n > 1)
    {
        if(n % 3 != 0)
            return false;
        n = n / 3;
    }
    return true;
} 
int main()
{
	int a;
	scanf("%d",&a);
	int b = isPowerOfThree(a);
 
}
//给定一个整数，写一个函数来判断它是否是 3 的幂次方。
