#include <stdio.h>

int main(void)
{
    int s,r,h,w;
    printf("(1) Circle\n(2) Rectangle\n(3) Triangle\n");
    printf("Enter the shape: ");
    scanf("%d",&s);
    if (s==1)
    {    
        printf("Enter the radius of the circle: ");
        scanf("%d",&r);
        printf("The area of the circle is %.2f.\n",3.14*r*r);
    }
    else if (s==2)
    {    
        printf("Enter the width of the rectangle: ");
        scanf("%d",&w);
        printf("Enter the height of the rectangle: ");
        scanf("%d",&h);
        printf("The area of the rectangle is %d.\n",w*h);
    }
    else if (s==3)
    {    
        printf("Enter the width of the triangle: ");
        scanf("%d",&w);
        printf("Enter the height of the triangle: ");
        scanf("%d",&h);
        printf("The area of the triangle is %.2f.\n",0.5*w*h);
    }
    else
        printf("invalid");
    printf("<End of program>\n");
    return 0;
}