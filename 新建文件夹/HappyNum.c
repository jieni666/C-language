#include<stdio.h>
#include<stdbool.h> 
#include<math.h>
bool isHappy(int n) 
{
    int i, mid;
    int cnt = 0;
    while(true){
        mid = 0;
        while(n!=0){//计算各位数字的和并赋给mid中转
            mid += pow((n % 10), 2);
            n = n / 10;
        }
        n = mid;
        if(n == 1)
            return 1;
        if(n < 100)
            cnt++;
        if(cnt > 20)
            return 0; 
    }
}
int main(){
	int a;
	scanf("%d",&a);
	isHappy(a) ;
	
} 
//编写一个算法来判断一个数是不是“快乐数”。
//一个“快乐数”定义为：对于一个正整数，每一
//次将该数替换为它每个位置上的数字的平方和，
//然后重复这个过程直到这个数变为 1，也可能是
//无限循环但始终变不到 1。如果可以变为 1，那么这个数就是快乐数。
