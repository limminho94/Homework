#include<stdio.h>

int main()
{
    int age;
    scanf("%d", &age);
    printf("나이: %d\n", age);
    if (age >= 8 && age < 60)
        printf("5,000원\n");
    else   
        printf("무료\n");
}