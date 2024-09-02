#include <stdio.h>

int main()
{
    int i, j;
    for(j=1; j<=9; j++)
    {
        for(i=2; i<=9; i++)
        {
            printf("%d*%d= %d ",i,j,i*j);
        }
        printf("\n");
    }
}