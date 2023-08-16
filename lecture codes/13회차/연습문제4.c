#include <stdio.h>

struct Student
{
    char name[10];
    int grade;
    int class;
    float score;
};

int main(void)
{
    struct Student std = {"최중현",1,24,98};
    struct Student *sptr = &std;

    printf("이름 : %s\n",sptr->name);
    printf("학년 : %d\n",sptr->grade);
    printf("반 : %d\n",sptr->class);
    printf("평균점수 : %f\n",sptr->score);
    return 0;
}