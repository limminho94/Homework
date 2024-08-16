#include <stdio.h>

int main()
{
    int i, n, sum;
    i = 1;
    sum = 0;
    scanf("%d", &n);
    printf("정수: %d\n", n);
    while(i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("합: %d\n", sum);
}