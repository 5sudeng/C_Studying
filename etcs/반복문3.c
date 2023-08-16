#include <stdio.h>

int InputPositiveData(void);

int main(void){
    int pint = InputPositiveData();
    if (pint>19)
        printf("%d살은 성년입니다.\n",pint);
    else
        printf("%d살은 미성년입니다.\n",pint);
    return 0;
}

int InputPositiveData(void){
    int age;
    do{
        printf("나이를 입력하세요 : ");
        scanf("%d",&age);
    }while(age<0);
    return age;
}