#include <stdio.h>

void sum(int a)
{
    int b;
    if (a == 0)
        return ;
    printf("%d\n", a);
    b = b + a;
    printf("%d", b);
    a = a-1;
    
    sum(a);
    

}

int main(void)
{
    sum(10);
    return 0;
}

