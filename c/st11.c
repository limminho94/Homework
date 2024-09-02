#include<stdio.h>

int main()
{
   int num;
   scanf("%d", &num);
   printf("정수: %d\n", num);
   if (num % 2 == 1)
        printf("홀수\n");
    else
        printf("짝수\n");
}