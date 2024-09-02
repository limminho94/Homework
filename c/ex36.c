#include <stdio.h>

int main()
{
    int i;
    int a[10] = {0}; 
    for(i=1; i<=10; i++)
    {
        a[i-1] = i;
        printf("%d ", a[i-1]);
    }
    printf("\n");
}