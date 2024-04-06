#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d;
    float x1,x2,img,real;
    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0 && b==0)
        printf("Invalid input!");
    else if(a == 0)
    {
        printf("Linear Equation.");
        x1 = -c/b;
        printf("The root is %f",x1);
    }
    else
        {
            d = ((b*b)-(4*a*c));
            if(d == 0)
            {
                printf("Roots are real and equal.");
                x1 = (-b/(2.0*a));
                x2 = x1;
                printf("Roots are: %f and %f",x1,x2);
            }
            else if(d>0)
            {
                printf("Roots are real and unequal.");
                x1 = ((-b+sqrt(d))/(2.0*a));
                x2 = ((-b-sqrt(d))/(2.0*a));
                printf("The roots are: %f and %f",x1,x2);
            }
            else
            {
                printf("Roots are imaginary.");
                real = (-b/(2.0*a));
                img = (sqrt(fabs(d)))/(2*a);
                printf("The roots are: %f + %fi and %f - %fi",real,img,real,img);
            }
        }
}