#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    printf("정수: %d\n", a);
    printf("정수: %d\n", b);
    printf("정수: %d\n", c);
    if (a < b && a < c)
        printf("가장 작은 수: %d\n", a);
    else if (b < a && b < c)
        printf("가장 작은 수: %d\n", b);
    else if (c < a && c < b)
        printf("가장 작은 수: %d\n", c);
    
}