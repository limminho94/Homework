#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    printf("입력받은 값:%d %d\n", a, b);
    if (a > b)
        printf("큰 수: %d\n", a);
    else 
        printf("작은 수: %d\n", b);
    
}