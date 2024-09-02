#include <stdio.h>

int main()
{
    int i,j,k,temp;
    int a[5][5];
    k = 0;
    for(i=0;i<=4;i++)
    {
        if(i == 1 || i == 3 )
        {
            for(j=4;j>=0;j--)
            {
                k = k + 1;
                printf("%d ", k);
                a[i][j] = k;
            }
        }
        else
        {
            for(j=0;j<=4;j++)
            {
                k = k + 1;
                a[i][j] = k;
                
            }
 
        }
        printf("\n");
    }
 

}   

