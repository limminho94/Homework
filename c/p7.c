#include <stdio.h>
int dia();

int main()
{
    dia();
}

int dia()
{
    int i,j,num;
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        num = num - 1;
        printf("정수 입력 : %d\n", num);
    }
    else if( num == 0)
    {
        printf("계속하려면 아무 키나 누르십시오...");
    }
    for(i=1;i<=(num/2) + 1;i++)
    {
        for(j=1;j<=((num/2)+1)-i;j++)
        {
            printf("%2s","X");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2s", " ");
        }
        for(j=2;j<=i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=((num/2)+1)-i;j++)
        {
            printf("%2s", "X");
        }
        printf("\n");
    }
    for(i=1;i<=(num/2); i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2s", "X");
        }
        for(j=1;j<=(((num/2)+1)-i);j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=(num/2)-i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2s", "X");
        }
        printf("\n");
    }
}    