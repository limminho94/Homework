#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    printf("정수:%d\n", n);
    for(i=2;i<=n-1;i++)
    {
        if(n % i == 0 )
        {
            printf("소수아님\n");
            break;
        }
        else
        {
            printf("소수임\n");
            break;
        }
            
       
    }
}