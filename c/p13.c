#include <stdio.h>
void wind();

int main()
{
    wind();
}

void wind()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2s", "*");
        }
        for(j=1;j<=10-i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=11-i;j++)
        {
            printf("%2s", "*");
        }
        for(j=2;j<=i;j++)
        {
            printf("%2s", " ");
        }
        printf("\n");
    }
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10-i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2s", "*");
        }
        for(j=2;j<=i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=11-i;j++)
        {
            printf("%2s", "*");
        }
        
        printf("\n");
    }
}