// LSR

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flag=0;

void lsr(int a[],int u, int key, int index){
    if(index<u)
        if(a[index]==key){
            printf("\nElement found at index: %d",index);
            flag=1;
            return;
        }
    else
        lsr(a,u,key,index+1);
}

void main(){
    int a[10000],u=100,l=1,key,i;
    clock_t st,et;
    for(i=0;i<u;i++){
        a[i]=rand()%(u-l+1)+l;
        printf("%d\t",a[i]);
    }
    printf("\nEnter search element: ");
    scanf("%d",&key);
    st=clock();
    lsr(a,u,key,0);
    if(flag==0) printf("\nElement not found.\n");
    et=clock();
    double ext=((double)(et-st))/CLOCKS_PER_SEC;
    printf("\nTime Taken: %lf s.\n",ext);
}