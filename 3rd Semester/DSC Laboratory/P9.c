/* Write a program to create a singly linked list that maintains a list 
of names in alphabetical order. Implement the following operations on 
the list.        
a. Insert a new name 
b. Delete a specified name */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    char name[50];
    struct node *next;
}Node;
Node *head = NULL;
void insert();
void delete();
void display();

void main(){
    int choice;
    while(1){
        printf("\nEnter your choice:\n1.Insert name\n2.Delete name\n3.Display the list\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("\nInvalid choice!");
        }
    }
}

void insert(){
    char name[50];
    printf("\nEnter the name: ");
    scanf("%s",name);
    Node *nn = (Node *)malloc(sizeof(Node));
    strcpy(nn->name,name); //
    if(head == NULL || strcmp(head->name,name) >= 0){
        nn->next=head;
        head=nn;
    }
    else{
        Node *temp = head;
        while(temp->next != NULL && strcmp(temp->next->name, name)<0){
            temp=temp->next;
        }
        nn->next=temp->next;
        temp->next=nn;
    }
}

void delete(){
    char name[50];
    printf("\nEnter the name: ");
    scanf("%s",name);
    Node *temp=head,*prev;
    if(temp!=NULL && strcmp(temp->name,name)==0){
        head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL && strcmp(temp->name,name)!=0){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("\nName not found!");
        return;
    }
    prev->next=temp->next;
    free(temp);
}

void display(){
    Node *temp=head;
    printf("\nNames in the list:\n");
    while(temp!=NULL){
        printf("%s ",temp->name);
        temp=temp->next;
    }
}