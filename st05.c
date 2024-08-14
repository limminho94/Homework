#include<stdio.h>

int main()
{
    int d,h,m;
    scanf("%d", &m);
    printf("%d분\n", m);

    d = m / 1440;
    m = m % 1440;
    h = m / 60;
    m = m % 60;
    printf("%d일 %d시간 %d분\n", d,h,m);
}