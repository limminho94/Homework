#include <stdio.h>

int main()
{
    int min, a, i;
    scanf("%d", &a);
    printf("정수 : %d\n", a);
    min = a;
    for(i = 1; i <= 5; i++)
    {
        scanf("%d", &a);
        printf("정수 : %d\n", a);
        if(min > a)
            min = a;
    }
    printf("최소값: %d\n", min);
    
}