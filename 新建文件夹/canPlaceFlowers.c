#include<stdio.h>
#include<stdbool.h>
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) ;
int main()
{
	int a[]={1,0,0,0,1};
	int b=5;
	int c=2;
	canPlaceFlowers(a,b,c);
}
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    if(n==0)
        return true;
    if(flowerbedSize==1&&flowerbed[0]!=0)
        return false;
    if(flowerbedSize==1&&flowerbed[0]==0)
        return true;
    if(flowerbed[0]==0&&flowerbed[1]==0){
        n--;
        flowerbed[0]=1;
    }
    if(flowerbed[flowerbedSize-1]==0&&flowerbed[flowerbedSize-2]==0){
        n--;
        flowerbed[flowerbedSize-1]=1;
    }
    int i;
    for(i=1;i<flowerbedSize-1;i++){
        if(flowerbed[i-1]==0&&flowerbed[i]==0&&flowerbed[i+1]==0){
            n--;
            flowerbed[i]=1;
        }
    }
    if(n<=0)
        return true;
    else
        return false;
}
//假设你有一个很长的花坛，一部分地块种植了花，另一部分却没有。可是，花卉不能种植在相邻的地块上，
//它们会争夺水源，两者都会死去。给定一个花坛（表示为一个数组包含0和1，其中0表示没种植花，1表示种
//植了花），和一个数 n 。能否在不打破种植规则的情况下种入 n 朵花？能则返回True，不能则返回False。
//示例 1:
//输入: flowerbed = [1,0,0,0,1], n = 1
//输出: True
//示例 2:
//输入: flowerbed = [1,0,0,0,1], n = 2
//输出: False
