#include<stdio.h>

int main()
{
    int num ;
    scanf("%d", &num);
    printf("정수: %d\n", num);
    if (num % 2 == 0)
        printf("짝수\n");
    else
        printf("홀수\n");

}