#include <stdio.h>
int max(void);
int min(void);
int oddEven(void);
int three(void);

int main()
{
    int n,m;
    m = max();
    getchar();
    printf("최대값: %d\n",m);
    n = min();
    getchar();
    printf("최소값: %d\n",n);
    oddEven();
    three();
}

int max(void)
{
    int max,n1;
    printf("숫자를 입력하세요(끝내려면a):");        
    while(scanf("%d", &n1))
    {
        printf("숫자를 입력하세요(끝내려면a):");
        if(max < n1)
        {
            max = n1;
        }
    }
    return max;
}

int min(void)
{
    int min,n1;
    
    printf("숫자를 입력하세요(끝내려면a):");
    scanf("%d",&min);
    while(scanf("%d", &n1))
    {
        printf("숫자를 입력하세요(끝내려면a):");
        if(min > n1)
        {
            min = n1;
        }
    }
    return min;
}

int oddEven(void)
{
    int n2;
    printf("숫자를 입력하세요:");
    scanf("%d", &n2);
    if(n2 % 2 == 0)
    {
        printf("짝수\n");
    }
    else
    {
        printf("홀수\n");
    }
}

int three(void)
{
    int n3;
    printf("숫자를 입력하세요:");
    scanf("%d", &n3);
    if(n3 > 0 )
    {
        printf("양수\n");
    }
    else if (n3 < 0)
    {
        printf("음수\n");
    }
    else
    {
        printf("0\n");
    }
    
}