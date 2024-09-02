#include<stdio.h>

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("정수: %d\n", num1);
    printf("정수: %d\n", num2);
    if (num1 < num2)
        printf("작은 수: %d\n", num1);
    else
        printf("작은 수: %d\n", num2);
}