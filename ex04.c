#include<stdio.h>

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("가로: %d\n", num1);
    printf("세로: %d\n", num2);
    printf("사각형 넓이: %d\n", num1 * num2);
}