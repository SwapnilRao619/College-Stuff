// MS

#include<stdio.h>
#include<time.h>

void msa(int a[],int l, int m, int r){
    int n1=m-l+1,n2=r-m,L[n1],R[n2],i,j,k;
    for(i=0;i<n1;i++) L[i]=a[l+i];
    for(j=0;j<n2;j++) R[j]=a[m+1+j];
    for(i=j=0,k=l;k<=r;k++)
        a[k]=(i<n1 && (j>=n2 || L[i]<=R[j]))?L[i++]:R[j++];
}

void msr(int a[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        msr(a,l,m);
        msr(a,m+1,r);
        msa(a,l,m,r);
    }
}

void main(){
    int a[]={1,1,0,1,0,1,0,0,0},n=sizeof(a)/sizeof(a[0]),i;
    clock_t st,et;
    printf("\nArray before merge sort:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    st=clock();
    msr(a,0,n-1);
    et=clock();
    printf("\nArray after merge sort:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    double ext=((double)(et-st))/CLOCKS_PER_SEC;
    printf("\nTime taken: %lf s.\n",ext);
}