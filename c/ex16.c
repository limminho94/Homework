#include<stdio.h>

int main()
{
    int age;
    scanf("%d", &age);
    printf("나이: %d\n", age);
    if (age < 8 || age >= 60)
        printf("무료\n");
    else
        printf("5000원\n");
    
}