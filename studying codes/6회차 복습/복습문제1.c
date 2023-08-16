#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int arr[20],total=0, i;
    for(i=0;i<20;i++) //랜덤값 생성
    {
        arr[i]=rand()%76+25;
        total+=arr[i];//총 합
    }
    for(i=0;i<20;i++) //랜덤값 출력
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int min=100,max=0,j;
    for(j=0;j<20;j++)
    {
        if(arr[j]<min) //최솟값 찾기
        {   
            min=arr[j];
            j++;
        }
        if(arr[j]>max) //최댓값 찾기
        {   
            max=arr[j];
            j++;
        }
    }
    float avg=total/20.0; //평균
    
    printf("가장 작은 값 : %d\n",min);
    printf("가장 큰 값 : %d\n",max);
    printf("평균 : %.2f\n",avg);
    return 0;
}