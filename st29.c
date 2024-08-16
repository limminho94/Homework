#include <stdio.h>

int main()
{
    int n1, n2, n3, i;
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("정수(3개): %d %d %d\n",n1,n2,n3);
    for(i = 1; i <= n1; i++)
    {
        if(n1 % i == 0 && n2 % i == 0 && n3 % i == 0)
            printf("%d ", i);
    }
    printf("\n");
        
}