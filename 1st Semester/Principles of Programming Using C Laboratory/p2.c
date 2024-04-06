#include<stdio.h>
#define PI 3.14
void main()
{
    float peri, area;
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area = PI*r*r;
    peri = 2*PI*r;
    printf("The area of the circle is: %.2f",area);
    printf("\nThe circumference of the circle is: %.2f",peri);
}