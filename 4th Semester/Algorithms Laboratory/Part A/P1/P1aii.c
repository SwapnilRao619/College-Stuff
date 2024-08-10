// EAR

#include<stdio.h>
#include<time.h>

int rem;

void ear(int x,int y){
    rem=x%y;
    if(rem==0)
        printf("\nGCD: %d\n",y);
    else
        ear(y,rem);
}

void main(){
    int x,y;
    clock_t st,et;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &x,&y);
    st=clock();
    ear(x,y);
    et=clock();
    double ext=((double)(et-st))/CLOCKS_PER_SEC;
    printf("\nTime Taken: %lf s.\n",ext);
}