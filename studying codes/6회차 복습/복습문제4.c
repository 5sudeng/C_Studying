#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int arr[40],i;
    for(i=0;i<40;i++) //랜덤값생성
        arr[i]=rand()%10+1;
    int rate[10]={1,2,3,4,5,6,7,8,9,10},fre[10]={0},j,k; ////정수 배열 그냥 선언하면 0아냐..? 근데 왜 오류나?
    for(j=0;j<10;j++)
    {
        for(k=0;k<40;k++)
        {
            if(rate[j]==arr[k])
                fre[j]++; //빈도수
        }
    }
    printf("%-s%13s\n","Rating","Frequancy");
    int l;
    for(l=0;l<10;l++)
    {
        printf("%6d%13d\n",rate[l],fre[l]);
    }
    int mode=0,total=0,n;
    for(n=0;n<10;n++) //최빈값--------------여러개일때 어떡해..?
    {
        if(mode<fre[n])
            mode=rate[n];
        total+=rate[n]*fre[n]; //총합
    }
    printf("최빈값 : %d\n",mode);
    double avg = total/40.0; //평균
    printf("평균 : %.2lf\n",avg);
    if (avg<=5)
        printf("급식질 나쁨\n");
    else
        printf("급식질 좋음\n");//6이상말고 5초과로 했는데,,
    return 0;
}