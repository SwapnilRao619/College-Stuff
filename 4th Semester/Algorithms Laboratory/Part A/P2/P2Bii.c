// BSR

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flag=0;

void bsr(int a[],int low, int high, int key){
    if(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
            printf("\nElement found at index: %d\n",mid);
            flag=1;
            return;
        }
        else if(key<a[mid])
            bsr(a,low,mid-1,key);
        else
            bsr(a,mid+1,high,key);
    }
}

int compare(const void *a, const void *b){
    return (*(int*)a-*(int*)b);
}

void main(){
    int a[10000],u=100,l=1,i,key;
    int high=u,low=0;
    clock_t st,et;
    for(i=0;i<u;i++)
        a[i]=rand()%(u-l+1)+l;
    qsort(a,u,sizeof(int),compare);
    for(i=0;i<u;i++)
        printf("%d\t",a[i]);
    printf("\nEnter the key: ");
    scanf("%d",&key);
    st=clock();
    bsr(a,low,high,key);
    if(flag==0) printf("\nElement not found.\n");
    et=clock();
    double ext=((double)(et-st))/CLOCKS_PER_SEC;
    printf("\nTime taken: %lf s.\n",ext);
}