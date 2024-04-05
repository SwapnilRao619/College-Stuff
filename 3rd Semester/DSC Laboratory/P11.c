/* Write a C program to support the following operations on a doubly 
linked list.    
a)  Insert a new node to the left of the node whose key value is read as 
an input. 
b)  Delete a node with given data, if it is found otherwise display 
appropriate error message. */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}N;
N *head=NULL;
void inser();
void delet();
void displa();

void main(){
    int c;
    while(1){
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&c);
        switch(c){
            case 1: inser();
            break;
            case 2: delet();
            break;
            case 3: displa();
            break;
            case 4: exit(1);
            default: printf("\nInvalid choice");
        }
    }
}

void inser(){
    N *nn=(N*)malloc(sizeof(N));
    int ele,key;
    printf("\nElement: ");
    scanf("%d",&ele);
    nn->data=ele;
    nn->next=NULL;
    nn->prev=NULL;
    if(head==NULL){
        head=nn;
        return;
    }
    if(head!=NULL){
        printf("\nKey: ");
        scanf("%d",&key);
    }
    N *temp=head;
    while(temp!=NULL && temp->data !=key){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("\nKey not found");
        return;
    }
    nn->prev=temp->prev;
    temp->prev=nn;
    nn->next=temp;
    if(nn->prev!=NULL) //
    nn->prev->next=nn; //
    else //
    head=nn; //
}

void delet(){
    int ele;
    printf("\nValue: ");
    scanf("%d",&ele);
    N *temp=head,*prev=NULL,*next=NULL;
    while(temp!=NULL && temp->data!=ele){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("\nElement not found");
        return;
    }
    next=temp->next;
    if(prev==NULL)
    head=next;
    else
    prev->next=next;
    if(next!=NULL)
    next->prev=prev;
    free(temp);
}

void displa(){
    N *temp=head;
    if(head==NULL){
        printf("\nEmpty");
        return;
    }
    printf("\nList:\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}