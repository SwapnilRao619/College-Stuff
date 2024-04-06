#include<stdio.h>
#define PI 3.14
int main()
{
    char shape;
    float b,h,r,s,s1,s2,area;
    printf("Enter the geometrical figure of which you want to find the area ('t' for triangle, 'c' for circle, 's' for square and 'r' for rectangle: ");
    scanf("%c",&shape);
    switch(shape)
    {
        case 't': printf("Enter the base and the height: ");
                  scanf("%f %f",&b,&h);
                  area = 0.5*b*h;
                  printf("Area: %f", area);
                  break;
        case 'c': printf("Enter the radius: ");
                  scanf("%f",&r);
                  area = PI*r*r;
                  printf("Area: %f", area);
                  break;
        case 's': printf("Enter a side: ");
                  scanf("%f",&s);
                  area = s*s;
                  printf("Area: %f", area);
                  break;
        case 'r': printf("Enter side 1 and side 2: ");
                  scanf("%f %f",&s1,&s2);
                  break;
        default: printf("Invalid shape!");
    }
    return 0;
}