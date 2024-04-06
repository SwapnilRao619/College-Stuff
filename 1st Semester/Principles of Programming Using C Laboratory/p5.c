#include<stdio.h>
int main()
{
    float n1,n2;
    char op;

    printf("Op (+,/,-,*): ");
    scanf("%c",&op);
    
    printf("O1: ");
    scanf("%f",&n1);
    
    printf("O2: ");
    scanf("%f",&n2);
    
    switch(op)
    {
        case '+': printf("Sum: %f",n1+n2);
                break;
        case '-': printf("Difference: %f",n1-n2);
                break;
        case '/': printf("Division: %f",n1/n2);
                break;
        case '*': printf("Product: %f",n1*n2);
                break;
        default: printf("Invalid op!");
    }
    return 0;
}