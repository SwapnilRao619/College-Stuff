/*P3:STACK of Integers (Array Implementation of Stack with maximum
size MAX)
a) Push an Element on to Stack
b) Pop an Element from Stack
c) Demonstrate how Stack can be used to check Palindrome
d) Demonstrate Overflow and Underflow situations on Stack
e) Display the status of Stack
f) Exit
Support the program with appropriate functions for each of the above
operations */

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void push();
void pop();
void palin();
void display();
int a[MAX],top=-1;

void main(){
    int choice;
    while(1){
        printf("\nEnter your choice: \n1.Push\n2.Pop\n3.Check palindrome\n4.Display\n5.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: palin();
            break;
            case 4: display();
            break;
            case 5: exit(0);
            default: printf("Wrong choice!");
        }
    }
}

void push(){
    int ele;
    printf("\nEnter the element that you want to push: ");
    scanf("%d",&ele);
    if(top>=MAX-1){
        printf("Stack overflow!");
    }
    top++;
    a[top]=ele;
}

void pop(){
    if(top<=-1){
        printf("\nStack underflow!");
    }
    printf("\nThe popped element is: %d",a[top]);
    top-=1;
}

void palin() {
    int floor = 0, ceil = top;
    while (floor <= ceil) {
        if (a[floor] == a[ceil]) {
            ceil--;
            floor++;
        } else {
            printf("The stack is not a palindrome.");
            return;
        }
    }
    printf("The stack is a palindrome.");
}

void display(){
    printf("\nThe elements of the stack are: \n");
    for(int i=0;i<=top;i++){
        printf("%d\t",a[i]);
    }
}