#include<stdio.h>

int main()
{
    int a ;
    scanf("%d", &a);
    printf("입력받은 값:%d\n", a);
    
    if (a < 0)
        printf("음수\n");
    else
        printf("양수\n");
}