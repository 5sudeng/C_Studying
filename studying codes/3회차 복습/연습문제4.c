#include <stdio.h>
int main(void)
{
    int year, fees;
    printf("input the school year: ");
    scanf("%d",&year);
    switch(year)
    {
        case 1:
            fees = 100 + 40;
            printf("school fees: %d\n",fees);
            break;
        case 2:
        case 3:
            fees = 100;
            printf("school fees: %d\n",fees);
            break;
        case 4:
            fees = 100 + 10;
            printf("school fees: %d\n",fees);
            break;
        default:
            printf("invalid\n");
            break;
    }
    return 0;
}