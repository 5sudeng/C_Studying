#include <stdio.h>

void PrintIntegerArray(int a[], int n);
int GetIntegerArray(int a[], int n, int s);
double AverageIntegerArray(int a[], int n);

int main(void){
    int arr[10];
    int n = GetIntegerArray(arr, 10, -1);
    double mean = AverageIntegerArray(arr, n);
    PrintIntegerArray(arr, n);
    printf("%d개 숫자의 평균은 %g입니다.\n",n, mean);
    return 0;
}

void PrintIntegerArray(int a[], int n){
    for (int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

int GetIntegerArray(int a[], int n, int s){
    int num, cnt =0;
    for (int i=0;i<n;i++){
        printf("정수 입력 : ");
        scanf("%d", &num);
        if (num == s)
            break;
        else {
            a[i] = num;
            cnt += 1;
        }
    }
    return cnt;
}

double AverageIntegerArray(int a[], int n){
    double sum=0;
    for(int i=0;i<n;i++)
        sum += a[i];
    return sum/n;
}