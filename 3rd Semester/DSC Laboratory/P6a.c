/* Write recursive functions for the following and demonstrate their use. 
a) Binary Search */

#include<stdio.h>
#include<stdlib.h>

int bs(int a[],int low, int high, int key);

int main(){
    int n,k,res;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the key element: ");
    scanf("%d",&k);
    res=bs(a,0,n-1,k);
    if(res==0){
        printf("\nElement not found in the array.");
    }
    else{
        printf("\nElement found at index %d in the array.",res);
    }
}

int bs(int a[],int low, int high, int key){
    if(low<=high){
        int mid = (low+high)/2;

        if(key==a[mid]){
            return mid;
        }

        if(key<a[mid]){
            return bs(a,low,mid-1,key);
        }

        if(key>a[mid]){
            return bs(a,mid+1,high,key);
        }

        return 0;
    }
}