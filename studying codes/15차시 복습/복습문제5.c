#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("score.dat","wb");
    int i, score;
    for(i=0;i<20;i++)
    {
        printf("Enter the score for student %d : ",i+1);
        scanf("%d",&score);   //\n어떻게넣지
        fputc(score,fp);
    }
    fclose(fp);
    return 0;
}