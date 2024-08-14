#include<stdio.h>

int main()
{
    int h,m,s;
    scanf("%d", &s);
    printf("초: %d\n", s);

    h = s / 3600;
    s = s % 3600;
    m = s / 60;
    s = s % 60;
    printf("%d시간 %d분 %d초\n", h, m, s);
}