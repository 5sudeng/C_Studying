#include <stdio.h>

int main(void)
{
    double infectedD0, Beta, Sigma, Gamma;
    int Susceptible[80], Exposed[80], Infected[80], Recovered[80];
    int day,i;
    while(1)
    {
        printf("Enter the number of infected people in Day 0: ");
        scanf("%lf",&infectedD0);
        printf("Enter the value of Beta (Transmission Rate): ");
        scanf("%lf",&Beta);
        printf("Enter the valude of Sigma (Incubation Rate): ");
        scanf("%lf",&Sigma);
        printf("Enter the value of Gamma (Recovery Rate): ");
        scanf("%lf",&Gamma);
        printf("How many days do you want to run the simulation: ");
        scanf("%d",&day);
        Susceptible[0]=51700000;
        Exposed[0]=0;
        Infected[0]=1;
        Recovered[0]=0;
    
    }
    return 0;
}