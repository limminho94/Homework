#include <stdio.h>

int main()
{
    int i,j,k;
    int a[5][5] ;
    k = 0;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {   
            k = k + 1;
            a[i][j] = k;
             printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}