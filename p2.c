#include <stdio.h>
#define PI 3.14
int cal(int n1, int n2,int ch);
int won(int r, int ch);


int main()
{
    int n1,n2,r;
    char ca;
    int ch;
    printf("사각형의 넓이:1, 원의 넓이:2,삼각형의 넓이:3, 원의 둘레:4");
    scanf("%d", &ch);
    getchar();
    if(ch == 1 || ch == 3)
    {
        printf("정수(2개):");
        scanf("%d%d", &n1,&n2);
        printf("%d\n",cal(n1,n2,ch));
    }
    else if(ch == 2 || ch == 4)
    {
        printf("반지름:");
        scanf("%d", &r);
        printf("%d\n",won(r,ch));
    }
 

}

int cal(int n1,int n2,int ch)
{
    if(ch == 1)
    {
        printf("사각형의 넓이:");
        return n1 * n2;
    }
    else if(ch == 3)
    {
        printf("원의 넓이:");
        return (n1 * n2) / 2 ;
    }
}

int won(int r,int ch)
{
    if(ch == 2)
    {
        printf("삼각형의 넓이:");
        return r * r * PI;
    }
    else if (ch == 4)
    {
        printf("원의 둘레:");
        return 2 * PI * r;
    }
}