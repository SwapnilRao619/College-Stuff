#include<stdio.h>
int main()
{
    int n, temp, c;
    int reversed = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    c = n;
    while (n > 0) 
    {
        temp = n % 10;
        reversed = reversed * 10 + temp;
        n = n / 10;
    }
    if (reversed == c)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    return 0;
}
