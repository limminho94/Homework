#include <stdio.h>
void tul();

int main()
{
    tul();
}

void tul()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(k=1;k<=3;k++)
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
            for(j=1;j<=4-i;j++)
            {
                printf("%2s", " ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=13;i++)
    {
        for(j=2;j<=i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=13-i;j++)
        {
            printf("%2s", "*");
        }
        for(j=1;j<=14-i;j++)
        {
            printf("%2s", "*");
        }
        printf("\n");
    }
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=12;j++)
        {
            printf("%2s"," ");
        }
        for(j=1;j<=1;j++)
        {
            printf("%2s","*");
        }
        printf("\n");
    }
}