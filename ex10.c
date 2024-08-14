#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if (a > b && a > c)
        printf("가장 큰 수:%d\n", a);
    else if (a > b && a < c)
        printf("가장 큰 수: %d\n", c);
    else if (a < b && b > c)
        printf("가장 큰 수:%d\n", b);
    else
        printf("가장 큰 수:%d\n", c);
}