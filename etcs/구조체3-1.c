#include <stdio.h>

typedef struct {
    char name[20];
    int num;
    char address[50];
}personT;

personT InputPerson(void);
void PrintPerson(personT);

int main(void){
    personT person = InputPerson();
    PrintPerson(person);
    return 0;
}

personT InputPerson(void){
    personT p;
    printf("이름을 입력하세요 : ");
    scanf(" %[^\n]",p.name);
    printf("번호를 입력하세요 : ");
    scanf("%d",&p.num);
    printf("주소를 입력하세요 : ");
    scanf(" %[^\n]",p.address);
    return p;
}
void PrintPerson(personT p1){
    printf("이름 : %s\n번호 : %d\n주소 : %s\n",p1.name, p1.num, p1.address);
}