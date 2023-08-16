#include <stdio.h>

int main(void)
{
    int op, i, score;
    do
    {
        printf("1. Read and display all data from \"score.dat\".\n");
        printf("2. Multiply all the numbers in \"score.dat\" by 2.\n");
        printf("3. Quit.\n");
        printf("Enter your option : ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                FILE *fp = fopen("score.dat","rb");
                for(i=0;i<20;i++)
                {
                    fgets(score,sizeof(score),fp);
                    printf("%d ");
                }
                puts("");
                fclose(fp);
                break;
            case 2:
                FILE *fp = fopen("score.dat","rb");//?? ㅠㅠ
                fclose(fp);
                break;
            case 3:
                break;
            default:
                printf("Enter again");
        }
    }while(op!=3);
    return 0;
}