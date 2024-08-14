#include<stdio.h>

int main()
{
    int max, a, b;
    scanf("%d%d%d",&max, &a, &b);
    printf("정수: %d\n", max);
    printf("정수: %d\n", a);
    printf("정수: %d\n", b);
    if (a > max)
        max = a;
        if (b > max)
            max = b;
    printf("가장 큰 수: %d\n", max);   
}