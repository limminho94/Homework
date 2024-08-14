#include<stdio.h>

int main()
{
    int m;
    scanf("%d", &m);
    printf("거리: %dkm\n", m);

    if (m < 5)
        printf("1,000원\n");
    else if (m >= 5 && m < 10)
        printf("2,000원\n");
    else
        printf("3,000원\n");
}