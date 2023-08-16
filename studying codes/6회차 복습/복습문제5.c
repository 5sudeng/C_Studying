#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int arr[40],i;
    for(i=0;i<40;i++) //랜덤값생성
        arr[i]=rand()%10+1;
    int rate[10]={1,2,3,4,5,6,7,8,9,10},fre[10]={0},j,k; 
    for(j=0;j<10;j++)
    {
        for(k=0;k<40;k++)
        {
            if(rate[j]==arr[k])
                fre[j]++; //빈도수
        }
    }
    printf("%-s%13s%13s\n","Rating","Frequancy","Histogram");
    int l,m;
    for(l=0;l<10;l++)
    {
        printf("%6d%13d    ",rate[l],fre[l]);
        for(m=0;m<fre[l];m++)
            printf("*");//히스토그램
        printf("\n");
    }
}