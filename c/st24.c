#include <stdio.h>

int main()
{
    int i, sum;
    i = 1;
    sum = 0;
    while (i <= 100)
    {
        if(i % 3 == 0)
        {
            sum = sum + i;
        }
        i = i + 1;
    }
    printf("3의 배수의 합:%d\n", sum);
    
}