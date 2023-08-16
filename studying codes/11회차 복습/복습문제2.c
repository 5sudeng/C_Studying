#include <stdio.h>

void SelectMap(int iSelect);
void Grassland(void);
void Cave(void);
void Temple(void);
void Sea(void);


int main(void)
{            
    //void (*fp[5])(void);..?
    void (*fp1)(int);
    void (*fp2)(void), (*fp3)(void), (*fp4)(void), (*fp5)(void);
        
    fp1=SelectMap;
    fp2=Grassland;
    fp3=Cave;
    fp4=Temple;
    fp5=Sea;

    while(1)
    {
        int to;
        printf("1.초원 2.동굴 3.신전 4.바다 중 이동할 곳을 선택하세요 : ");
        scanf("%d",&to);
        fp1(to);
        puts("");
    }

    return 0;
}

void SelectMap(int iSelect)
{
    switch(iSelect)
    {
        case 1:
            //fp2;
        case 2:
            fp3:
        case 3:
            fp4:
        case 4:
            //fp5;
        default:
            printf("다시 입력하세요.\n");
            break;
    }

}

void Grassland(void)
{
    printf("초원으로 이동했습니다.\n");
}
void Cave(void)
{
    printf("동굴로 이동했습니다.\n");
}
void Temple(void)
{
    printf("신전으로 이동했습니다.\n");
}
void Sea(void)
{
    printf("바다로 이동했습니다.\n");
}
