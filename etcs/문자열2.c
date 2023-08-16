#include <stdio.h>

void StringCopy(char dst[], char src[]);

int main(void){
    char src[40] = "hi my name is sujeong";
    char dst[34];
    StringCopy(dst, src);
    printf("기존 문자열 : %s\n복사된 문자열 : %s\n",src,dst);
    return 0;
}

void StringCopy(char dst[], char src[]){
    for(int i=0;src[i]!='\0';i++){
        dst[i] = src[i];
    }
}