#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void caizi(void)
{
    int n;
    char begin;
    int count = 1;
    srand((int)time(NULL));
    int m = (rand() % 100) + 1;
    puts("游戏开始，请输入数字:");
    while (1)
    {
        scanf("%d", &n);
        if (n == m)
        {
            printf("猜中了，使用了 %d 次！\n", count);
            if (count!=0)
            {
                getchar();
                printf("还需要玩吗？Y/N \n");
                scanf("%c", &begin);
                if (begin == 'Y' || begin == 'y')  
                {
                    caizi();
                }
                else
                {
                    printf("谢谢，再见!\n");
                }
            }

            break;
        }
        else if (n < m)
        {
            puts("太小了!");
            puts("重新输入:");
        }
        else
        {
            puts("太大了!");
            puts("重新输入:");
        }
        count++;
        
        
    }
}
int main(void)
{
    
    caizi();
    system("pause");
    return 0;
}
