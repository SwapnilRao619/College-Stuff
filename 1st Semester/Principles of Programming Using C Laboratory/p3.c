#include<stdio.h>
#define TAX 8.50
void main()
{
    float q;
    float up;
    float d;
    float t1,t2,t3,t4,t5;
    printf("Enter the quantity sold: ");
    scanf("%f",&q);
    printf("Enter the unit price: ");
    scanf("%f",&up);
    printf("\nEnter the discount rate: ");
    scanf("%f",&d);
    t1 = q*up;
    t2 = (d/100)*t1;
    t3 = t1-t2;
    t4 = (TAX/100)*t3;
    t5 = t4 + t3;
    printf("\nQuantity sold: %.2f",q);
    printf("\nDiscount rate: %.2f",d);
    printf("        ----------\n");
    printf("\nSubtaxable: %.2f",t1);
    printf("\nDiscount: %.2f",t2);
    printf("\nDiscount total: %.2f",t3);
    printf("\nSales tax: + %.2f",t4);
    printf("\nTotal: %.2f",t5);
}