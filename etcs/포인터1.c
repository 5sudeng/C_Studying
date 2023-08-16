#include <stdio.h>

void ConvertTimeToHMS(int time, int* hour, int* mim, int* sec);

int main(void){
    int hour, min, sec, time = 3690;
    ConvertTimeToHMS(time, &hour, &min, &sec);
    printf("%d시 %d분 %d초\n", hour, min, sec);
    return 0;
}

void ConvertTimeToHMS(int time, int* hour, int* mim, int* sec){
    *hour = time/3600;
    *mim =(time%3600)/60;
    *sec = time%60;
}