#include<stdio.h>

int main()
{
    int cm, m;
    scanf("%d", &cm);
    printf("cm: %d\n", cm);

    m = cm / 100;
    cm = cm % 100;
    printf("%dm %dcm\n",m,cm);
}