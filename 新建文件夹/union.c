#include <stdio.h>
union mix
{
   int i;
   char c[2];
};
 
void main()
{
    union mix m;        
    m.i = 343;
    printf("After i is assigned:");
    printf("c[0]=%d,",m.c[0]);
    printf("c[1]=%d\n,",m.c[1]);
	m.c[0]='A';
	printf("After i is assigned:");
	printf("i=%d\n",m.i);
    m.c[1]='a';
    printf("After i is assigned:");
   	printf("i=%d\n",m.i);
}
