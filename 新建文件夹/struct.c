#include<stdio.h> 
int main()
{
	struct stu_str
	{
		char num[10];
		int score_mid;
		int score_end;
	}stu[5];
	int sum_mid = 0;
	int sum_end = 0;
	int ave_mid = 0;
	int ave_end = 0;
	int i;
	for(i=0;i<5;i++)
	{
		printf("请输入id:\n");
		scanf("%s",&stu[i].num);
		printf("请输入中期成绩:\n")	;
		scanf("%d",&stu[i].score_mid);
		printf("请输入期末成绩:\n");
		scanf("%d",&stu[i].score_end);
	}
	for(i=0;i<5;i++)
	{
		sum_mid+=stu[i].score_mid;
		sum_end+=stu[i].score_end;
	}
	ave_mid = sum_mid/5;
	ave_end = sum_end/5;
	printf("学号 期中分数 期末分数\t\n");
	for(i=0;i<5;i++)
	{
		printf("%s\t",stu[i].num);
		printf("%d\t",stu[i].score_mid);
		printf("%d\t",stu[i].score_end);
		printf("\n");
	}
	printf("期中平均分:%d\n",ave_mid);
	printf("期末平均分:%d\n",ave_end);
	return 0;
}
//编程实现输入5个学生的学号、计算他们的期中和期末成绩，然后计算其平均成绩，并输出成绩表
