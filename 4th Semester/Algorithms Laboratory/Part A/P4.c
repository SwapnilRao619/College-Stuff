// QS

#include<stdio.h>
#include<time.h>

void qs(int a[],int l, int r){
    if(l>=r) return;
    int p=a[r],i=l-1;
    for(int j=l;j<r;j++)
        if(a[j]<p){
            i++;
            int t=a[j];a[j]=a[i];a[i]=t;
        }
    int t=a[i+1];a[i+1]=a[r];a[r]=t;
    qs(a,0,i);
    qs(a,i+2,r);
}

void main(){
    int a[]={3,2,5,4,7,9,6},n=sizeof(a)/sizeof(a[0]),i;
    clock_t st,et;
    printf("\nArray before quick sort:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    st=clock();
    qs(a,0,n-1);
    et=clock();
    double ext=((double)(et-st))/CLOCKS_PER_SEC;
    printf("\nArray after quick sort:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nTime taken: %lf s.",ext);
}