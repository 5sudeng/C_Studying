#include <stdio.h>

void DisplayOdd(int s, int e, int m);

int main(void) {
    DisplayOdd(1, 100, 5);
    return 0;
}

void DisplayOdd(int s, int e, int m){
    int cnt = 0;
    for (int i = s;i<e+1; i+=2){
        if(i%5!=0){
            printf("%d ",i);
            cnt += 1;
            if (cnt%10 == 0)
            printf("\n");
        }
    }
    printf("\n");
}