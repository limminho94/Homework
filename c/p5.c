#include <stdio.h>
void star1();
void star2();
void star3();
void star4();
void star5();
void star6();
void star7();

int main()
{
    printf("1번\n");
    star1();
    printf("2번\n");
    star2();
    printf("3번\n");
    star3();
    printf("4번\n");
    star4();
    printf("5번\n");
    star5();
    printf("6번\n");
    star6();
    printf("7번\n");
    star7();
}

void star1()
{
    int i,j;
    for(i=1; i<=6; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2s", "*");
        }
        printf("\n");
    }
}

void star2()
{
    int i,j;
    for(i=1; i<=6; i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2s", "*");
        }
        printf("\n");
    }
}

void star3()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=7-i;j++)
        {
            printf("%2s", "*");
        }
        printf("\n");
    }
}

void star4()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=2;j<=i;j++)
        {
            printf("%2s", " ");
        }  
        for(j=1;j<=7-i;j++)
        {
            printf("%2s", "*");
        }
        printf("\n");
    }
}

void star5()
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6-i;j++)
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
}

void star6()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=2;j<=i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=7-i;j++)
        {
            printf("%2s", "*");
        }
        for(j=1;j<=6-i;j++)
        {
            printf("%2s", "*");
        }
        printf("\n");
    }
}

void star7()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3-i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%2s", "*");
        }
        for(j=1;j<=i-1;j++)
        {
            printf("%2s", "*");
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=2;j<=i;j++)
        {
            printf("%2s", " ");
        }
        for(j=1;j<=3-i;j++)
        {
            printf("%2s", "*");
        }
        for(j=1;j<=4-i;j++)
        {
            printf("%2s", "*");
        }
        printf("\n");
    }
}