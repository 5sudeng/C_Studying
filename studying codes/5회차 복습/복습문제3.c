#include <stdio.h>

void mn(int a, int b);
int gcd(int a, int b);
void lcm(int a, int b);
int M,N;
int main(void)
{
    int a,b;
    printf("Enter two positive integers: ");
    scanf("%d %d",&a,&b);
    mn(a,b);
    printf("GCD = %d\n",gcd(M,N));
    lcm(M,N);
    return 0;
}

void mn(int a, int b)
{
    M = a > b ? a : b;
    N = a < b ? a : b;
    printf("M = %d, N = %d\n",M,N);
}

int gcd(int a, int b)
{
    if (a%b==0) return b;
    else return gcd(b,a%b);
}

void lcm(int a, int b)
{
    printf("LCM = %d\n",a*b/gcd(a,b));
}

