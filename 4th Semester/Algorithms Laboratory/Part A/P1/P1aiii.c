// CICM

#include<stdio.h>
#include<time.h>

int mini(int x,int y){
    return (x<y)?x:y;
}

void main(){
    int x,y,t;
    clock_t st,et;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &x,&y);
    t=mini(x,y);
    st=clock();
    while(t>0){
        if(x%t==0 && y%t==0)
            break;
        t--;
    }
    et=clock();
    double ext=((double)(et-st))/CLOCKS_PER_SEC;
    printf("\nGCD: %d\nTime Taken: %lf s.\n",t,ext);
}