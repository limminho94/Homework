#include <stdio.h>
void wood();


int main()
{
    wood();
}

void wood()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf("%2s", " ");
        }
        for(j=2;j<=i;j++)
        {
            printf("%2s", "*");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2s", "*");
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2s", "*");
        }
        for(j=1;j<=i+1;j++)
        {
            printf("%2s","*");
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3-i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=i+1;j++)
        {
            printf("%2s", "*");
        }
        for(j=1;j<=i+2;j++)
        {
            printf("%2s","*");
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
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