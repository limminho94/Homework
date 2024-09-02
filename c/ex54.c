#include <stdio.h>
int func(int n1, int n2, int n3);

int main()
{
    int n1,n2,n3;
    printf("정수(3개) : ");
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("큰 수 : %d\n", func(n1,n2,n3));
}

int func(int n1, int n2, int n3)
{   
    int max;
    if(n1 < n3 && n2 < n3)
    {
        max = n3;
    }
    else if(n1 < n3 && n2 > n3)
    {
        max = n2;
    }
    else if(n1 > n3 && n2 < n3)
    {
        max = n1;
    }
    else if(n1 < n2 && n1 > n3)
    {
        max = n2;
    }
    else
    {
        max = n1;
    }
    
    
    return max;
}