#include <stdio.h>

int main()
{
    int i;
    int a[10];
    for(i=1; i<=10; i++)
    {
        a[i-1] = i * 10;
    }
    for(i=9;i>=0;i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}