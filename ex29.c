#include <stdio.h>

int main()
{
    int a,b,c,i, temp;
    a = 1;
    b = 1;
    c = a + b;
    printf("%d %d ", a, b);
    for(i=3;i<=20;i++)
    {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;   
    }
    printf("\n");
}