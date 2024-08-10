// LSI

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    int a[10000],u=100,l=1,key,i,flag=0;
    clock_t st,et;
    for(i=0;i<u;i++){
        a[i]=rand()%(u-l+1)+l;
        printf("%d\t",a[i]);
    }
    printf("\nEnter key: ");
    scanf("%d",&key);
    st=clock();
    for(i=0;i<u;i++){
        if(a[i]==key){
            printf("\nElement found at index: %d",i);
            flag=1;
            break;
        }
    }
    if(flag==0) printf("\nElement not found.\n");
    et=clock();
    double ext=((double)(et-st))/CLOCKS_PER_SEC;
    printf("\nTime taken: %lf s.",ext);
}