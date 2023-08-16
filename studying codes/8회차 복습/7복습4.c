#include <stdio.h>

int main(void) ////대체 뭐지......
{
    int i,j,k,h,l,m,sum1,sum2;
    int arr[5][5];
    for(i=0;i<4;i++)
    {
        printf("%d번째 학생의 점수를 입력하세요\n",i+1);
        for(j=0;j<4;j++)
        {
            sum1=0;
            printf("과목 %d : ",j+1);
            scanf("%d",&arr[i][j]);
            sum1+=arr[i][j];
        }
        arr[i][4]=sum1;
        printf("\n");
    for(k=0;k<4;k++)
    {
        sum2=0;
        for(h=0;h<4;h++)
            sum2+=arr[h][k];
        arr[4][k]=sum2;
        arr[4][4]+=sum2;
    }
    }
    for(l=0;l<5;l++)
    {
        for(m=0;m<5;m++)
            printf("%2d ",arr[l][m]);
        printf("\n");
    }
    return 0;
}