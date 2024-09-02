#include<stdio.h>

int main()
{
    int num1, num2, cha;
    scanf("%d%d", &num1, &num2);
    printf("정수: %d\n", num1);
    printf("정수: %d\n", num2);
    cha = num1 - num2;
    printf("두 수의 차: %d\n", cha);
}