#include <stdio.h>
int func(int n1,int n2);

int main()
{
    int n1, n2;
    printf("정수(2개) : ");
    scanf("%d%d", &n1, &n2);
    printf("작은 수 : %d\n",func(n1,n2));

}

int func(int n1, int n2)
{
    int min;
    if(n1 < n2)
    {
        min = n1;
    }
    else
    {
        min = n2;
    }
    return min;
}