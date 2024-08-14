#include<stdio.h>

int main()
{
    int min,num1,num2;
    scanf("%d%d%d", &min, &num1, &num2);
    printf("정수: %d\n", min);
    printf("정수: %d\n", num1);
    printf("정수: %d\n", num2);
    if (min > num1)
        min = num1;
        if(min > num2)
            min = num2;
    printf("가장 작은 수: %d\n", min);
}