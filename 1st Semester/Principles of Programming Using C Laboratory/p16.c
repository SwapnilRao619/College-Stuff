#include<stdio.h>
int n;
void prime()
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            printf("%d is not a prime number.",n);
            break;
        }
        else
        {
            printf("%d is a prime number.",n);
            break;
        }
    }
}
int main()
{
    printf("Enter the number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}