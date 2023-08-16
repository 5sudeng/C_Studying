#include <stdio.h>

struct employee
{
    char name[10];
    char id[20];
    int salary;
};

int main(void)
{
    struct employee inf;
    printf("이름 : ");
    scanf("%s",inf.name);
    printf("주민번호 : ");
    scanf("%s",inf.id);
    printf("급여 : ");
    scanf("%d",&inf.salary);

    printf("이름 : %s\n",inf.name);
    return 0;
}