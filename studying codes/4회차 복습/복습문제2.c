#include <stdio.h>

void printOption(void);
void changeCurrency(char op);
char op;
int won;

int main(void)
{
    do
    {
        printOption();
        scanf("%s",&op);
        if (op=='E') break;
        changeCurrency(op);
        printf("\n");
    }
    while(op!='E');
    return 0;
}

void printOption(void)
{
    printf("Please choose which currency you want to convert:\n");
    printf("A - Korean Won to US Dollar (Excange Rate: 0.000905)\n");
    printf("B - Korean Won to Euro (Excange Rate: 0.000807350908)\n");
    printf("C - Korean Won to Japanese Yen (Excange Rate: 0.0919061643)\n");
    printf("D - Korean Won to Chinese RMB (Excange Rate: 0.00603703605)\n");
    printf("E - Quit\n");
    printf("Enter your option: ");
}

void changeCurrency(char op)
{
    if (op=='A' || op=='B' || op=='C' || op=='D')
    {
        printf("Enter the amount in Korean Won: ");
        scanf("%d",&won);
        switch (op)
        {
            case 'A':
                printf("%d Won equals to %.6f USD\n",won,won*0.000905);
                break;
            case 'B':
                printf("%d Won equals to %f Euro\n",won,won*0.000807350908);
                break;
            case 'C':
                printf("%d Won equals to %f Yen\n",won,won*0.0919061643);
                break;
            case 'D':
                printf("%d Won equals to %f RMB\n",won,won*0.00603703605);
                break;
        }
    }
    else 
        printf("You entered an invalid input.\n");

}