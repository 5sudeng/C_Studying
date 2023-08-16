#include <stdio.h>
#define NAME_LEN 30
#define PID_LEN 15

struct __person
{
    char name[NAME_LEN];
    char ID[PID_LEN];
    unsigned int age;
};
typedef struct __person person;
void SwapPersonData(person *per1, person *per2);

int main(void)
{
    person per1 = {0}, per2 = {0};
    printf("첫번째 : ");
    scanf("%s,%s",&per1.name,&per1.ID);
    printf("두번째 : ");
    scanf("%s,%s",&per2.name,&per2.ID);
    SwapPersonData(&per1, &per2);
    printf("호출 후 첫번째 : %s,%s\n호출 후 두번째 : %s,%s\n",per1.name,per1.ID,per2.name,per2.ID);
    return 0;
}

void SwapPersonData(person *per1, person *per2)
{
    person tmp;
    tmp = *per1;
    *per1 = *per2;
    *per2 = tmp;
}