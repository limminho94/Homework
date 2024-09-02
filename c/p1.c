#include <stdio.h>
int sum(int n1, int n2, char cal);

int main()
{
    int n1,n2;
    char cal;
    printf("정수(2개):");
    scanf("%d%d", &n1,&n2);
    getchar();
    printf("기호:");
    scanf("%c",&cal);
    printf("%d\n",sum(n1,n2,cal));
}

int sum(int n1,int n2, char cal)
{

    if(cal == '+')
    {
        return n1 + n2;
    }
    else if(cal == '-')
    {
        return n1 - n2;
    }
    else if(cal == '*')
    {
        return n1 * n2;
    }
    else if(cal == '/')
    {
        return n1 / n2;
    }
    else if(cal == '%')
    {
        return n1 % n2;
    }
    
}