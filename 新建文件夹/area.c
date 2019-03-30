#include<stdio.h>
#include<stdlib.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
    int main(){
	    int a,b,c,d,e,f,g,h;
	    printf("请输入每个矩形坐标\n");
	        scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
        int i = computeArea(a,b,c,d,e,f,g,h);
} 
int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int resArea = 0;
        int w1 = abs(C - A);
        int h1 = abs(D - B);
        int w2 = abs(G - E);
        int h2 = abs(H - F);
        int w3 = min(C, G) - max(A, E);
        int h3 = min(D, H) - max(B, F);
        if(A >= G || B >= H || C <= E || D <= F) {
            resArea = w1 * h1 + w2 * h2;
        }else
        resArea = w1 * h1 + w2 * h2 - w3 * h3;
        printf("面积为%d:",resArea);
    }

//在二维平面上计算出两个由直线构成的矩形重叠后形成的总面积。
//每个矩形由其左下顶点和右上顶点坐标表示
//输入: -3, 0, 3, 4, 0, -1, 9, 2
//输出: 45
