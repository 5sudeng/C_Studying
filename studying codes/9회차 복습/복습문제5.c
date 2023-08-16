#include <stdio.h>

int main(void)
{
    int i;
    int arr[10];
    for(i=0;i<10;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("User entered: ");
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
    puts("");
    int *head, *tail;
    head = &arr[0];
    tail = &arr[9];
    for(i=0;i<5;i++)
    {
        if(*head==*tail)
        {
            head++;
            tail--;
            if(i==4)    printf("It is Palindrome!\n\n");
        }
        else 
        {
            printf("No!!! It is not a Palindrome!\n\n");
            break;
        }
    }
    return 0;
}