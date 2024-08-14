#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    printf("정수: %d\n", num);
    if (num % 3 == 0 && num % 5 == 0)
        printf("3과 5의 배수\n");
    else if (num % 3 == 0)
        printf("3의 배수\n");
    else if (num % 5 == 0)
        printf("5의 배수\n");
    else
        printf("둘 다 아님\n");
}