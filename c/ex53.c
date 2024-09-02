#include <stdio.h>
int func(int n1,int n2);

int main()
{
    int n1, n2;
    printf("정수(2개) : ");
    scanf("%d%d", &n1, &n2);
    printf("큰 수 : %d\n",func(n1,n2));

}

int func(int n1, int n2)
{
    int max;
    if(n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }
    return max;
}