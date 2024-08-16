#include <stdio.h>

int main()
{
    int i, sum;
    sum = 0;
    for(i=2;i<=100;i++)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("%d\n", sum);
}