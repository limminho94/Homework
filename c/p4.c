#include <stdio.h>

int sum(int n1,int n2,int n3);

int main()
{
    int n1,n2,n3;
    printf("정수(3개)입력:");
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("합:%d\n",sum(n1,n2,n3));
   
}

int sum(int n1,int n2,int n3)
{
    int max,min,i,n1Sum,n3Sum;
    
    if(n1 < n2 && n1 < n3) 
    {
        min = n1;
    }
    else if(n2 < n3)
    {
        max = n3;
    }
    n1Sum = 0;
    n3Sum = 0;
    for(i=1;i<=n1;i++)
    {  
        n1Sum = n1Sum + i;
    }
    for(i=1;i<=n3;i++)
    {
        n3Sum = n3Sum + i;
    }
    return  (n3Sum - n1Sum) - n3;
    
}