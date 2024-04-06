#include<stdio.h>
int main()
{
    int i,n,a[100],sum;
    float avg;
    sum = 0;
    avg = 0;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum = sum + a[i];
    avg = (float)sum / i;
    printf("The sum and average of the array elements: %d and %f", sum, avg);
    return 0;
}