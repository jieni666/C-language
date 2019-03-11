#include <stdio.h>  
enum NUMBER                         //枚举
{
	EXIT,
	PLAY
};
 
void Printf(char a[3][3])      //打印数组
{
	int i = 0, j = 0;
 
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%c  ", a[i][j]);
		}
		printf("\n");
	}
}
 
void menu()             
{
	printf("--------------1.开始游戏--------------\n");
	printf("--------------0.退出游戏--------------\n");
}
 
void fill(char a[3][3])       //填充 即下棋代码 
{
	int x = 0, y = 0;                 //玩家输入的横坐标和纵坐标  
	int ran1 = 0, ran2 = 0;    //分别表示 电脑产生的连个随机数 用来确定电脑下子的坐标  
	srand((unsigned)time(NULL));//随机数发生器的初始化函数。  
 
	while (1)
	{
		x = 0, y = 0;                //在每次下子前初始化玩家坐标为00  
		printf("请输入你的坐标：");
		scanf("%d%d", &x, &y);
		if (x>3 || x<1 || y>3 || y<1)//玩家所输入的横纵坐标都必须要在1-3之间  
		{
			printf("坐标有误，请重新输入！\n");
			continue;
		}
		if (a[x - 1][y - 1] == '_')   //数组初始化每个元素为_ 为真时说明该坐标还未被填充  
		{
			a[x - 1][y - 1] = 'X';
			Check(a);       //检查是否获胜  
		}
		else
		{
			printf("已被填充，请重新填充!\n");
			continue;
		}
		while ((a[ran1 - 1][ran2 - 1] != '_'))  //一直产生随机数直到 该坐标未被填充  
		{
			ran1 = rand() % 3 + 1; //随机产生（0~2）+1，即（0~3）的数 
			ran2 = rand() % 3 + 1;
		}
		a[ran1 - 1][ran2 - 1] = '0';       //电脑下子  
		Check(a);
 
		Printf(a);  //双方下完一次后打印出结果  
 
	}
}
 
int Check(char a[3][3])
{
	int i, j;
	int count = 0; //用来标记数组中未被填充的元素个数  
	//共8中获胜可能   
	if (a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][2] == 'X'
		|| a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][2] == 'X'
		|| a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][2] == 'X'
		|| a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[2][2] == 'X'
		|| a[2][0] == a[1][1] && a[1][1] == a[0][2] && a[0][2] == 'X'
		|| a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[2][0] == 'X'
		|| a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[2][1] == 'X'
		|| a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[2][2] == 'X')
	{
	printf("玩家赢！\n");
		system("pause");// 暂停棋盘的处理并显示消息
		Printf(a);
		exit(0);
	}
	else if (a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][2] == '0'
		|| a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][2] == '0'
		|| a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][2] == '0'
		|| a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[2][2] == '0'
		|| a[2][0] == a[1][1] && a[1][1] == a[0][2] && a[0][2] == '0'
		|| a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[2][0] == '0'
		|| a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[2][1] == '0'
		|| a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[2][2] == '0')
	{
		printf("电脑赢！\n");
		Printf(a);
		system("pause");
		exit(0);
	}
	else
	{
 
 
		for (i = 0; i<3; i++)
		{
			for (j = 0; j<3; j++)
			{
			if (a[i][j] == '_')
					count++;
			}
		}
		if (count == 0)
		{
			printf("和棋！\n");
			Printf(a);
			system("pause");
			exit(0);
		}
		count = 0;
	}
 
}
 
void init(char arr[3][3])  //初始化棋盘 
{
	int i = 0, j = 0;
	char arry[3][3] = { "___", "___", "___" };
 
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			arr[i][j] = arry[i][j];
			printf("%c  ", arr[i][j]);
		}
		printf("\n");
	}
}
 
void PlayGame(char arr[3][3])
{
	init(arr);
	fill(arr);
}
int main()
{
	char game[3][3] = { 0 };
	int choose = 1;
	while (choose)
	{
		menu();
		printf("请选择：");
		scanf("%d", &choose);
		switch (choose)
		{
		case PLAY:
			PlayGame(game);
			break;
		case EXIT:
			return 0;
			break;
		default:
			printf("输入错误\n");
	         	break;
		}
	}
	system("pause");
	return 0;
}



