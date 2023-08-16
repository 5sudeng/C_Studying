#include <stdio.h>

void DisplayTriangle(int h);

int main(void){
    int h;
    do{
        printf("정수를 입력하세요 : ");
        scanf("%d",&h);
        DisplayTriangle(h);
    }while(h>0);
    
    return 0;
}

void DisplayTriangle(int h){
    for (int i=1;i<=h;i++){
        for (int j=0;j<h-i;j++)
            printf(" ");
        for (int j=0;j<i;j++)
            printf("*");
        printf("\n");
    }
}