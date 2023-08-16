#include <stdio.h>

void update(int *a, int *b);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a,&b);
    printf("%d %d\n", a,b);
    return 0;
}

void update(int *a, int *b)
{
    int tmp = *a;
    *a = *a + *b;
    if (tmp>*b) *b = tmp - *b;
    else *b = *b - tmp;
}