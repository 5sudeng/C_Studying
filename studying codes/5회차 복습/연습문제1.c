#include <stdio.h>

int factorial(int num);

int main(void)
{
    printf("1! = %d\n",factorial(1));
    printf("2! = %d\n",factorial(2));
    printf("3! = %d\n",factorial(3));
    printf("4! = %d\n",factorial(4));
    printf("5! = %d\n",factorial(5));
    return 0;
}

int factorial(int num)
{
    if (num==1) return num;
    else return num*factorial(num-1);
}