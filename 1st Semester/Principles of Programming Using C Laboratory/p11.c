#include<stdio.h>
void main()
{
    int a[100],n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Square of the indices of the array of size %d:",n);
    for(int i =0;i<n;i++)
        printf("\n%d",i*i);
}