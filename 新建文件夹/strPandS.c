#include<stdio.h>
#include<string.h>
void main(){
	int i;
	char str[40],min[40];
	printf("请输入6个字符串:\n");
	gets(str);
	strcpy(min,str);
	for(i=1;i<6;i++){
		gets(str);
		if(strcmp(str,min)<0){
			strcpy(min,str);
		}	
	} 
		printf("最小的是：");
		puts(min);
} 
//输入6串字符，输出值（第一个不同字符）较小的字符串 
