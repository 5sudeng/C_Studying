#include <stdio.h>

double InchToCm(double inch);
double CmToInch(double cm);

int main(void)
{
    printf("%lf\n",InchToCm(3.24));
    printf("%lf\n",CmToInch(12.7));
    return 0;
}

double InchToCm(double inch)
{
    return inch*2.54;
}
double CmToInch(double cm)
{
    return cm/2.54;
}