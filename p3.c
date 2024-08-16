#include <stdio.h>
int max(void);
int min(void);

int main()
{
    int n,m, n1;
    m = max();
    getchar();
    printf("%d\n",m);
    n = min();
    printf("%d\n",n);
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
