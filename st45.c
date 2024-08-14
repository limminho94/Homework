#include <stdio.h>

int main()
{
    int i,j,k,a;
    a = 1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j <= 4)
                printf(" ");
            else
                printf("%d", a);
                a = a + 1;
        }
        printf("\n");
    }
}