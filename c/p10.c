#include <stdio.h>
void arrow();

int main()
{
    arrow();
}


void arrow()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2s", "*");
        }
        for(j=2;j<=i;j++)
        {
            printf("%2s", "*");
        }
        printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=2;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=5;j++)
        {
            printf("%2s","*");
        }
        printf("\n");
    }
}