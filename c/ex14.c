#include<stdio.h>

int main()
{
    int age, num;
    num = 5000;
    scanf("%d", &age);
    printf("나이: %d\n", age);
    if (age < 8)
        printf("입장료: %d\n", num - 5000);
    else if (age >= 8 && age < 60)
        printf("입장료: %d\n", num);
    else
        printf("입장료: %d\n", num/2);

}