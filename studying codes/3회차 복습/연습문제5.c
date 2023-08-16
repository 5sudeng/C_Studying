#include <stdio.h>

int main(void)
{
    int year;
    printf("input the year: ");
    scanf("%d",&year);
    if (year%4 != 0)
        printf("평년입니다.\n");
    else if (year%400==0 || year%100!=0)
        printf("윤년입니다.\n");
    else
        printf("평년입니다.\n");
    return 0;
}