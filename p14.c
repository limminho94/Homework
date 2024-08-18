#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int user(int num);
int computer(int com);
int vs(int userNum, int comNum);
int res(int win, int draw, int los);

int main()
{
    int i,num,com,userNum, comNum,win,draw,los;
    
    while(1)
    {
        userNum = user(num);
        comNum = computer(com);
        printf("사용자는 %d를 냈습니다.\n", userNum);
        printf("컴퓨터는 %d를 냈습니다.\n", comNum);
        vs(userNum,comNum);
        win = vs(userNum,comNum);
    
    }
}

int user(int num)
{
    int r,s,p,win,draw,los;
    while(1)
    {
        printf(">>> 가위(1) 바위(2) 보(3) 입력 : ");
        scanf("%d", &num);
        getchar();
        if(num == 1)
        {
            s = num;
            return s;
        }
        else if(num == 2)
        {
            r = num;
            return r;
        }
        else if(num == 3)
        {
            p = num;
            return p;
        }
        else if(num == 0)
        {
            res(win,draw,los);
            break;
        }
        else
        {
            printf("다시 입력하세요\n");
            continue;
        }
    }
    
}

int computer(int com)
{
    srand(time(NULL));
    com = rand() % 3 + 1;

    return com;
}

int vs(int userNum, int comNum)
{
    int win, draw,los;
    win = 0;
    draw = 0;
    los = 0;
    if(userNum > comNum)
    {
        printf("이겼습니다.\n");
        win = win + 1;
        return win;
    }
    else if(userNum == comNum)
    {
        printf("무승부입니다.\n");
        draw = draw + 1;
        return draw;
    }
    else
    {
        printf("졌습니다.\n");
        los = los + 1;
        return los;
    }
    printf("\n");
    
    
}


int res(int win, int draw, int los)
{
    
    printf("[종합 결과]");
    printf("> 승 : %d", win);
    printf("> 무 : %d", draw);
    // printf("> 패 : %d", los);
    
}