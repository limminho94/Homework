#include <stdio.h>
int func(int n1);

int main()
{
    int n1,i;
    printf("정수입력 : ");
    scanf("%d", &n1);
    printf("%d: ",n1);
    func(n1);
}

int func(int n1)
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        if(n1 % i == 0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}