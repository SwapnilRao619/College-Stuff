// KP [P3 and P6]

#include<stdio.h>

int max(int a,int b){
    return (a>b)?a:b;
}

void ks(int c, int wt[], int p[], int n){
    int k[n+1][c+1],i,w;
    for(i=0;i<=n;i++)
        for(w=0;w<=c;w++)
            k[i][w]=(i==0||w==0)?0:(wt[i-1]<=w)?max(p[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]) : k[i-1][w];
    printf("\nMax profit: %d",k[n][c]);
    w=c; printf("\nItems: ");
    for(i=n;i>0 && w>0;i--)
        if(k[i][w]!=k[i-1][w]){
            printf("%d ",i);
            w-=wt[i-1];
        }
}

void main(){
    int c=8,wt[]={2,3,4,5},p[]={10,20,50,60},n=sizeof(p)/sizeof(p[0]),i;
    printf("\nWeights: "); for(i=0;i<n;i++) printf("%d ",wt[i]);
    printf("\nProfits: "); for(i=0;i<n;i++) printf("%d ",p[i]);
    printf("\nCapacity: %d",c);
    ks(c,wt,p,n);
}