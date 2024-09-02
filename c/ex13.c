#include<stdio.h>

int main()
{
    int num ;
    scanf("%d", &num);
    printf("정수: %d\n", num);
    if (num % 3 == 0)
        printf("3의 배수\n");
    else
        printf("3의 배수가 아니다\n");
}