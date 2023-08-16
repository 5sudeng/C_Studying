#include <stdio.h>

float power(float a, float b);

int main(void)
{
    printf("%lf\n",power(2.0,4.0));
    return 0;
}

float power(float a, float b)
{
    if (b==0) return 1;
    else return a*power(a,b-1);
}