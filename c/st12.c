#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("정수: %d\n",a);
    if (a % 3 != 0)
        printf("3의 배수 아님\n");
    else
        printf("3의 배수\n");
}