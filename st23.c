#include <stdio.h>

int main()
{
    int i, sum;
    sum = 0;
    for(i=1; i<=100; i++)
    {
        if(i % 3 == 0)
            sum = sum + i;
    }
    printf("3의 배수의 합: %d\n", sum);
}