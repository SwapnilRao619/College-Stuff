#include<stdio.h>
void main()
{
  int n,a[100],i;
  int sum=0;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  printf("Enter the elements: ");
  for(i = 0; i <n; i++)
    scanf("%d",&a[i]);
  int *ptr = a;
  for(i=0;i<n;i++)
  {
    sum += *ptr;
    ptr++;
  }
  printf("The sum of the array elements: %d",sum);
}