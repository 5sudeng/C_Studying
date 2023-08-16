#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int com,user;
    char chcom[10], uscom[10],result[20];
    srand(time(NULL));
    int cntus=0,cnts=0;
    while(1)
    {
        printf("가위는 1, 바위는2, 보는 3 : ");
        scanf("%d",&user);
        com=rand()*3+1;
        if(com==user)
        {
            result[10] = "비겼습니다!";
            cnts++;
        }
        else if(com<user)
        {
            if(com==1 && user==3)
            {
                result[10] = "당신이 졌습니다!";
            }
            result[10]="당신이 이겼습니다!";
            cntus++;
        }
        else
        {
            if(com==3 && user==1)
            {
                result[10] = "당신이 이겼습니다!";
                cntus++;
            }
            result[10] = "당신이 졌습니다!";
        }
        if(com==1)
            chcom[10]="가위";
        else if(com==2)
            chcom[10]="바위";
        else   
            chcom[10]="보";
        if(user==1)
            uscom[10]="가위";
        else if(user==2)
            uscom[10]="바위";
        else   
            uscom[10]="보";
        printf("당신은 %s선택, 컴퓨터는 %s 선택, %s\n",uscom,chcom,result);
        if(result=="당신이 졌습니다!")
        {
            printf("게임의 결과 : %d승 %d무\n",cntus,cnts);
            break;
        }
    }
    return 0;
}