#include <stdio.h>

int main()
{
    int i, num, sum;
    i = 1;
    sum = 0;
    scanf("%d", &num);
    printf("정수:%d\n", num);
    while (i <= num)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("합: %d\n", sum);
}