#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int arr[10],i,j;
    for(i=0;i<10;i++)
    {
        arr[i]=rand()%10+1;
        printf("%d ",arr[i]);
    }
    int max=0;
    int len=0;
    while(len<10)
    {
        if(max<arr[len])
            max=arr[len];
        len++;
    }
    int cnt=0;
    for(i=0;i<10;i++)
    {
        if(max==arr[i])
            cnt++;
    }
    puts("");
    puts("");

    int min,tmp;
    for(i=0;i<sizeof(arr)/sizeof(int)-1;i++)
    {
        min=0;
        for(j=1;j<sizeof(arr)/sizeof(int);j++)
        {
            if(arr[i]<arr[j])
                min=j;   
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[j] = tmp;
        for(j=0;j<sizeof(arr)/sizeof(int);j++)
            printf("%d ",arr[j]);
        puts("");
    }


    int scdmax=0;
    int len2=0;

    puts("");

    if(cnt>=2)
        printf("A학점의 기준은 %d점 입니다.\n",max);
    else
    {
        while(len2<10)
        {
            if(scdmax<arr[len2]&&arr[len2]!=max)
                scdmax=arr[len2];
            len2++;
        }
        printf("A학점의 기준은 %d점 입니다.\n",scdmax);
    }    
    return 0;
}