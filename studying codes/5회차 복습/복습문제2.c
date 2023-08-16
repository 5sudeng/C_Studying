#include <stdio.h>

void gcd(int a, int b);

int main(void)
{
    int a,b;
    printf("Enter two positive integers: ");
    scanf("%d %d",&a,&b);
    int M = a > b ? a : b;
    int N = a < b ? a : b;
    printf("M = %d, N = %d\n",M,N);
    gcd(M,N);
    return 0;
}

void gcd(int a, int b)
{
    if (a%b==0) printf("GCD = %d\n",b);
    else return gcd(b,a%b);
}

