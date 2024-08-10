// MSPM

#include<stdio.h>
#include<time.h>

int mini(int x,int y){
    return (x<y)?x:y;
}

void main(){
    int x,y,gcd=1;
    clock_t st,et;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&x,&y);
    st=clock();
    for(int i=2;i<=mini(x,y);i++)
        if(x%i==0 && y%i==0){
            gcd*=i;
            x/=i;
            y/=i;
        }
    et=clock();
    double ext=((double)(et-st))/CLOCKS_PER_SEC;
    printf("\nGCD: %d\nTime Taken: %lf s.\n",gcd,ext);
}