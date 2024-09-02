#include <stdio.h>

int main()
{
    int a[10] = {10,70,100,30,50,20,60,80,90,40};
    int max,i;
    max = a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d", max);
}