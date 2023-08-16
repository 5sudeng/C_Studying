#include <stdio.h>

typedef struct{
    int x;
    int y;
}pointT;

int IsEquals(pointT, pointT);

int main(void){
    pointT p1 = {1,2};
    pointT p2 = {3,2};
    int result = IsEquals(p1, p2);
    if (result == 1)
        printf("두 좌표는 동일좌표입니다.\n");
    else
        printf("두 좌표는 동일좌표가 아닙니다.\n");
    return 0;
}

int IsEquals(pointT p1, pointT p2){
    if ((p1.x == p2.x) && (p1.y == p2.y))
        return 1;
    else 
        return 0;
}