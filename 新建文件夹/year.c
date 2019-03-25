#include<stdio.h> 
struct date
{
	int year;
	int month;
	int day;
};
	int isRyear(int year);
	int dif(struct data a,struct data b);
		int isRyear(int year)
	{
		if((year%4==0&&year%100!=0)||year%400==0)
		{
			return 1;
		}
		else return 0;
	}
	int diff(struct date a , struct date b)
	{
		int i;
		long day=0,day1=0,day2=0;
		int
		 d[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                {0,31,29,31,30,31,30,31,31,30,31,30,31}};	
        for(i=a.year;i<b.year;i++)
        	if(isRyear(i))
        		day +=366;
			else day +=365;
			for(i=1;i<a.month;++i)
			day1 +=d[isRyear(a.year)] [i];
			day1 += a.day;
			for(i=1;i<b.month;++i)
			day2 +=	d[isRyear(b.year)] [i];
			day2 += b.day;
			return day + day2 -day1;
	}
	void main()
	{
		struct date a,b;
		printf("输入日期1(早于日期2):\n");
		scanf("%d %d %d",&a.year,&a.month,&a.day);
		printf("输入日期2:\n");
		scanf("%d %d %d",&b.year,&b.month,&b.day);
		printf("相差天数为:\n");
		printf("%d天\n",diff(a,b));
	}

//输入两个年份计算他们相差天数
