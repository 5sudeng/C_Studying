#include <stdio.h>

int factorial(int a);

int main(void)
{
    printf("5! = %d",factorial(5));
    return 0;
}

int factorial(int a)
{
    if (a==0) 
        return 1;
    else
        return a*factorial(a-1);
}