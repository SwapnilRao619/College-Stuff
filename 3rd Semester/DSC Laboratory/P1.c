/*P1:Design, Develop and Implement a menu driven Program in C for the
following array operations.
a) Creating an array of N Integer Elements
b) Display of array Elements with Suitable Headings
c) Inserting an Element (ELEM) at a given valid Position (POS)
d) Deleting an Element at a given valid Position (POS)
e) Exit.
Support the program with functions for each of the above operations. */

#include<stdio.h>
#include<stdlib.h>

int a[100],n;

void creat();
void displa();
void inser();
void delet();

void main(){
    int choice;
    while(1){
        printf("\nEnter your choice:\n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: creat();
            break;
            case 2: displa();
            break;
            case 3: inser();
            break;
            case 4: delet();
            break;
            case 5: exit(0);
        }
    }
}

void creat(){
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void displa(){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

void inser(){
    int ele,pos;
    printf("Enter the element to be inserted: ");
    scanf("%d",&ele);
    printf("Enter the position at which element has to be inserted: ");
    scanf("%d",&pos);
    if(pos<0 || pos >n){
        printf("Invalid position!");
        return;
    }
    for(int i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=ele;
    n++;
}

void delet(){
    int pos;
    printf("Enter the position that the element has to be deleted from: ");
    scanf("%d",&pos);
    if(pos<0 || pos >=n){
        printf("Invalid position!");
    }
    for(int i=pos;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
}