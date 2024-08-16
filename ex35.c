#include <stdio.h>

int main()
{
    int i, j,x;
    
    for(i=2; i<=9; i++)
    {
        for(j=1; j<=9; j++)
        {
            x = i * j;
            printf("%2d*%2d= %2d ",i, j, x);
        }
        printf("\n");
    }
}