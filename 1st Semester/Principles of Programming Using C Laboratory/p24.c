#include<stdio.h>
void main()
{
    int key,mid,low,high,a[100],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements (In a sorted manner) : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search element: ");
    scanf("%d",&key);
    low = 0;
    high = n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]>key)
            high = mid-1;
        else if(a[mid]<key)
            low = mid+1;
        else if(a[mid]==key)
        {
            printf("Element found at %d.",mid);
            break;
        }
    }
}