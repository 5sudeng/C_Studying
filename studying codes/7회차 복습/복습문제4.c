#include <stdio.h>

//////이거 완정 대환장파티 ㅡㅡ

int main(void)
{
    int grades[5][5];
    int i,j,k,l,m,n,o;
    printf("국어 영어 수학 국사 순으로 점수를 입력하세요.\n");
    for(i=0;i<4;i++)
    {
        printf("%d : ",i+1);
        scanf("%d %d %d %d",&grades[i][0],&grades[i][1],&grades[i][2],&grades[i][3]);
    }
    printf("\n");

    for(k=0;k<4;k++)
    {
        for(l=0;l<4;l++)
            grades[k][4]+=grades[k][l];
        for(j=0;j<4;j++)
            grades[4][j]+=grades[k][j];
    }

    for(m=0;m<4;m++)
        grades[4][4]+=grades[m][4];
    
    for(n=0;n<5;n++)
    {
        for(o=0;o<5;o++)
            printf("%d ",grades[n][o]);
        printf("\n");
    }

    return 0;
}