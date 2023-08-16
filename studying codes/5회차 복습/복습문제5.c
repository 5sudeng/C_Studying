#include <stdio.h>

float Cel2Fah(float a);
float Fah2Cel(float a);

int main(void)
{
    int op;
    float temp;
    printf("1.섭씨온도\n2.화씨온도");
    printf("\n어떤 온도를 입력하시겠습니까?(숫자로 입력):");
    scanf("%d",&op);
    printf("\n");
    switch (op)
    {
        case 1:
            printf("섭씨온도를 입력하세요: ");
            scanf("%f",&temp);
            printf("\n화씨온도:%.2f\n",Cel2Fah(temp));
            break;
        case 2:
            printf("화씨온도를 입력하세요: ");
            scanf("%f",&temp);
            printf("\n섭씨온도:%.2f\n",Fah2Cel(temp));
            break;
        default:
            printf("\n잘못 입력하셨습니다.\n");
            break;
    }
    return 0;
}

float Cel2Fah(float a)
{
    return 1.8*a+32;
}

float Fah2Cel(float a)
{
    return (a-32)/1.8;
}