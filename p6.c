#include <stdio.h>
int tri(int num);


int main()
{
    int num;
    tri(num);
}

int tri(int num)
{
    printf("정수 입력 : ");
    int i,j;
    ;
    while(scanf("%d", &num))

    {
        if( num > 0)
        {
            for(i=1;i<=num;i++)
            {
                for(j=1;j<=num-i;j++)
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
        else
        {
            printf("계속하려면 아무 키나 누르십시오...\n");
        }
    }
    
}