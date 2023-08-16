#include <stdio.h>
int main(void)
{
    while(1)
    {
        printf("Please choose which currency you want to convert:\n");
        printf("1 - Korean Won to US Dollar (Excange Rate: 0.000905)\n");
        printf("2 - Korean Won to Euro (Excange Rate: 0.000807350908)\n");
        printf("3 - Korean Won to Japanese Yen (Excange Rate: 0.0919061643)\n");
        printf("4 - Korean Won to Chinese RMB (Excange Rate: 0.00603703605)\n");
        printf("5 - Quit\n");
        printf("Enter your option: ");
        int op,won;
        scanf("%d",&op);
        if (op!=1 && op!=2 && op!=3 && op!=4 && op!=5)
            printf("You entered an invalid input.\n");
        else if (op==5)
            break;
        else
        {   printf("Enter the amount in Korean Won: ");
            scanf("%d",&won);
            switch(op)
            {
                case 1:
                    printf("%d Won equals to %.6f USD\n",won,won*0.000905);
                    break;
                case 2:
                    printf("%d Won equals to %f Euro\n",won,won*0.000807350908);
                    break;
                case 3:
                    printf("%d Won equals to %f Yen\n",won,won*0.0919061643);
                    break;
                case 4:
                    printf("%d Won equals to %f RMB\n",won,won*0.00603703605);
                    break;
            }
        }
        printf("\n");
    }

    return 0;
}