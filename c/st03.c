#include<stdio.h>

int main()
{
    int num1, num2, ext;
    scanf("%d%d", &num1, &num2);
    printf("밑변: %d 높이: %d\n", num1, num2);
    ext = (num1 * num2) / 2;
    printf("삼각형의 넓이:%d\n", ext);

}