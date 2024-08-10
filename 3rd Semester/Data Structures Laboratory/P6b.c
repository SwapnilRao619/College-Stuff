/* b) Tower of Hanoi problem */

#include<stdio.h>
#include<stdlib.h>

int step=0;
void toh(int n, char source, char temp, char dest);

void main(){
    int n;
    printf("\nEnter the number of rings: ");
    scanf("%d",&n);
    toh(n,'A','B','C');
}

void toh(int n, char A, char B, char C){
    if(n==1){
        printf("\nStep %d: Move %d from %c to %c",++step,n,A,C);
    }
    else{
        toh(n-1,A,C,B);
        toh(1,A,B,C);
        toh(n-1,B,A,C);
    }
}