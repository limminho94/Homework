#include <stdio.h>
int func(int n);

int main()
{
    int n;
    for(n=2;n<=10;n++)
    {
        printf("%d : ",n);
        func(n);
    }
    
}

int func(int n)
{
    int i,chk;
    chk = 1;
    for(i=2;i<=n-1;i++)
    {
        if(n % i == 0)
        {
            chk = 0;
            break;;
        }
        else break;
    }
    if(chk == 1)
    {
        printf("소수\n");
    }
    else
    {
        printf("소수아님\n");
    }
}