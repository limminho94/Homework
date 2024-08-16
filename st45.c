#include <stdio.h>

int main()
{
    int i,j,k,a;
    int arr[5][5] ={ {},{},{},{},{} };
    a = 1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf("   ");
        }
        for(k=0; k<i; k++)
        {
            printf("%2d ",a);
            a = a + 1 ;
        }
        printf("\n");
    }
}