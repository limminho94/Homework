#include <stdio.h>

int main()
{
    int i, temp;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    temp = a[0];
    for(i=0;i<=8;i++)
    {
        a[i] = a[i+1];
    }
    a[9] = temp;
    for(i=0;i<=9;i++)
    {
        printf("%d ", a[i]);
    }
}