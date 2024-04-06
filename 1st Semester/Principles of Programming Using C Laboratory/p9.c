// Facorial using for loop
#include<stdio.h>
void main()
{
    int n, fact=1, c;
    printf("Enter the number: ");
    scanf("%d",&n);
    c = n;
    for(int i=1;i<n;i++)
        fact = i*fact;
    n = n*fact;
    printf("The factorial of %d is %d.",c,n);
}

// Factorial using recursion
//Factorial using recursion
#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
void main()
{
    int n;
    int result;
    printf("Enter the number: ");
    scanf("%d",&n);
    result = fact(n);
    printf("The factorial is %d", result);
}