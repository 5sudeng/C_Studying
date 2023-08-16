#include <stdio.h>
#include <math.h>

void PrintMenu(void);
int AskUserInput(void);
void DisplayResult(int result);
int num,enteredNum;

int main(void)
{
    PrintMenu();
    enteredNum = AskUserInput();
    printf("%d\n",enteredNum);
    DisplayResult(enteredNum);
    return 0;
}

void PrintMenu(void)
{
    printf("Please input an integer: ");
}

int AskUserInput(void)
{
    int num;
    scanf("%d",&num);
    printf("You entered: ");
    return num;
}

void DisplayResult(int result)
{
    printf("The result is: %.0f\n",pow(result,3));
}