#include <stdio.h>

int main()
{
    int a,b,c,i, sum;
    a = 1;
    b = 1;
    c = a + b;
    sum = 0;
    //printf("%d %d ", a, b);
    for(i=3;i<=20;i++)
    {
        //printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
        sum = sum + c;   
    }
    printf("합: %d\n", sum);
}