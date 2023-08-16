#include <stdio.h>

int arr[5][5];

void inputScore(void);
void calSum(void);
void outputArr(void);

int main(void)
{
    inputScore();
    calSum();
    outputArr();
    return 0;
}

void inputScore(void)
{
    int i,j;
    for(i=0;i<4;i++)
    {
        printf("%d번째 학생의 점수를 입력하세요.\n",i+1);
        for(j=0;j<4;j++)
        {
            printf("%d : ",j+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}

void calSum(void)
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            arr[i][4]+=arr[i][j];
            arr[4][i]+=arr[j][i];
        }
        arr[4][4]+=arr[i][4];
    }
}

void outputArr(void)
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}