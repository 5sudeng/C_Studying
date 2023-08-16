#include <stdio.h>

int PrintPercent(int i, char plotData);
void PrintHistogram(int percent);

double arrS[81], arrE[81], arrI[81], arrR[81];

int main(void)
{
    double infected;
    double beta, sigma, gamma;
    double numS, numE, numI, numR;
    double population;
    int day,i;
    char plot, op;
    int percent;

    while(1)
    {
        numS = 51700000.0;
        numE = 0.0;
        numI = 0.0;
        numR = 0.0;

        printf("Enter the number of infected people in Day 0 : ");
        scanf("%lf", &infected);
        printf("Enter the value of Beta (Transmission Rate) : ");
        scanf("%lf", &beta);
        printf("Enter the value of Sigma (Incubation Rate) : ");
        scanf("%lf", &sigma);
        printf("Enter the value of Gamma (Recovery Rate) : ");
        scanf("%lf", &gamma);
        printf("How many days do you want to run the simulation : ");
        scanf("%d",&day);
        
        getchar();
        
        arrS[0] = numS;
        arrE[0] = 0;
        arrI[0] = infected;
        arrR[0] = 0;
        population = numS + infected;

        for(i=1;i<=day+1;i++)
        {
            numE = beta * arrS[i-1] * arrI[i-1] / population;
            numI = sigma * arrE[i-1];
            numR = gamma * arrI[i-1];
        
            arrS[i] = arrS[i-1] - numE;
            if(arrS[i]<0)
            {
                arrS[i] = 0;
                numE = arrS[i-1];
            }
            arrE[i] = arrE[i-1] + numE - numI ;
            arrI[i] = arrI[i-1] + numI - numR ;
            arrR[i] = arrR[i-1] + numR ;
        }

        printf("%-7s   %-17s %-17s %-17s %-17s\n", "Day","S","E","I","R");
        for(i=0;i<80;i++)
            printf("=");
        puts("");
        for(i=0;i<day+1;i++)
        {
            printf("Day ");
            printf("%2d:   %-17lf %-17lf %-17lf %-17lf\n",i,arrS[i],arrE[i],arrI[i],arrR[i]);
        }
        puts("");
        while(1)
        {
            printf("Do you want to plot the result [y/n] ?: ");
            scanf("%c", &plot);
            getchar();

            if(plot == 'n') 
                break;

            printf("Which data would you like to plot? [s/e/i/r]: ");
            scanf("%c", &op);
            getchar();

            for(i=0;i<day+1;i++)
            {
                percent = PrintPercent(i, op);
                PrintHistogram(percent);
            }
            puts("");

        }
        
    }
    return 0;
}

int PrintPercent(int i, char plotData)
{
    double numS = 51700000.0;
    if(plotData == 's')
    {
        printf("Day %2d (%3.f%%)   |",i,arrS[i]*100/numS);
        return (int)(arrS[i]*100/numS);
    }
    else if(plotData == 'e')
    {
        printf("Day %2d (%3.f%%)   |",i,arrE[i]*100/numS);
        return (int)(arrE[i]*100/numS);
    }
    else if(plotData == 'i')
    {
        printf("Day %2d (%3.f%%)   |",i,arrI[i]*100/numS);
        return (int)(arrI[i]*100/numS);
    }
    else if(plotData == 'r')
    {
        printf("Day %2d (%3.f%%)   |",i,arrR[i]*100/numS);
        return (int)(arrR[i]*100/numS);
    }
    return 0;
}

void PrintHistogram(int percent)
{
    int i;
    for(i=0;i<percent;i++)
        printf("*");
    puts("");
}

//0.1428571428571429
//0.0714285714285714