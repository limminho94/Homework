#include <stdio.h>

int main()
{
    int n1, n2, i;
    scanf("%d%d", &n1, &n2);
    printf("정수(2개) : %d %d\n", n1, n2);
    for(i=n1;1<=i;i--)
    {
        if(n1 % i == 0 && n2 % i == 0)
        { 
            printf("%d\n",i);
            break;
        }
    }
}