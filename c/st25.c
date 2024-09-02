#include <stdio.h>

int main()
{
    int i, sum, n1, n2;
    i = 1;
    sum = 0;
    n1 = 0;
    n2 = 0;
    while (i <= 100)
    {
        if(i % 2 == 0)
        {
            i = -i;
            n1 = n1 + i;
            i = -i + 1;
        }
        else
        {
            n2 = n2 + i;
            i = i + 1;
        }
    }
    sum = n1 + n2;
    printf("%d\n", sum);
    
}