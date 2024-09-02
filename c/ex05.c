#include<stdio.h>

int main()
{
    int a,b,c,sum,avg;
    scanf("%d%d%d", &a, &b, &c);
    
    sum = a + b + c;
    avg = sum / 3;
    printf("성적(3개) : %d %d %d\n총점: %d\n평균: %d\n", a, b, c, sum, avg);
    
}