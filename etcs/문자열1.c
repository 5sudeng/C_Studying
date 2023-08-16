#include <stdio.h>

void ToUpperString(char s[]);


int main(void){
    char string[10]= "hello";
    ToUpperString(string);
    return 0;
}

void ToUpperString(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if ('a'<=s[i] && s[i]<='z'){
            s[i] = s[i] - ('a'-'A');
        }
    }
    printf("%s\n",s);
}