#include <stdio.h>
int main(void)
{
    int date;
    printf("Enter a date in numerical from (MMDDYYYY): ");
    scanf("%d",&date);
    int year = date%10000;
    int day = (date%1000000-year)/10000;
    int month = date/1000000;
    
    printf("The date you entered is: %d",day);
    if(day==1 || day==11 || day==21 || day==31) printf("st");
    else if(day==2 || day==12 || day==22) printf("nd");
    else if(day==3 || day==13 || day==23) printf("rd");
    else printf("th");

    printf(" ");

    switch(month)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
    }

    printf(" ");

    printf("%d\n",year);
    
    return 0;
}