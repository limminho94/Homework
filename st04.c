#include<stdio.h>

int main()
{
    int m, km; 
    scanf("%d", &m);
    printf("길이:%d\n", m);

    km = m / 1000;
    m = m % 1000;
    printf("%dkm %dm\n", km, m);

}