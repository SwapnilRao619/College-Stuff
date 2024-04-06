#include<stdio.h>
void main()
{
    float f,c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&f);
    c = 0.555555556*(f-32);
    printf("%.2f Farhenheit is %.2f Celsius",f,c);
    
    printf("\nEnter temperature in Celsius: ");
    scanf("%f",&c);
    f = ((1.8*c)+32);
    printf("%.2f Celsius is %.2f Farhenheit",c,f);
}