/* Write a C program to maintain a stack of integers using linked 
implementation method. */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}N;
N *top=NULL;
void push();
void pop();
void display();
void peek();

void main(){
    int c;
    while(1){
        printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\n");
        scanf("%d",&c);
        switch(c){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: peek();
            break;
            case 5: exit(0);
            default: printf("\nInvalid choice");
        }
    }
}

void push(){
    int ele;
    printf("\nElement: ");
    scanf("%d",&ele);
    N *nn=(N*)malloc(sizeof(N));
    if(nn==NULL){
        printf("\nOverflow");
        return;
    }
    nn->data=ele;
    nn->next=top;
    top=nn;
}

void pop(){
    if(top==NULL){
        printf("\nUnderflow");
        return;
    }
    N *temp=top;
    printf("\nPopped element: %d",temp->data);
    top=temp->next;
    free(temp);
}

void display(){
    N *temp=top;
    if(top==NULL){
        printf("\nEmpty stack");
        return;
    }
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void peek(){
    if(top==NULL){
        printf("\nEmpty stack");
        return;
    }
    N *temp=top;
    printf("\nTop element: %d",temp->data);
}