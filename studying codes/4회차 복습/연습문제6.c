#include <stdio.h>

int main(void)
{
    float cel;
    printf("섭씨온도를 입력하세요: ");
    scanf("%f",&cel);
    printf("%f\n",cel*9/5+32);
    return 0;
}