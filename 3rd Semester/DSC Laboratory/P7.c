/* A Call center phone system has to hold the phone calls from customers 
and provide service based on the arrival time of the calls. Write a C 
program to simulate this system using appropriate data structure. 
Program should have options to add and remove the phone calls in 
appropriate order for their service. */

#include<stdio.h>
#include<stdlib.h>
#define MAX 3

int call[MAX];
int front=-1,rear=-1;

void insert();
void delete();
void display();

void main(){
    int choice;
    while(1){
        printf("\nEnter your choice:\n1.Add call\n2.Remove call\n3.Display call list\n4.Exit\n");
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
    int callerid;
    printf("\nEnter Caller ID: ");
    scanf("%d",&callerid);
    if(rear==MAX-1){
        printf("\nQueue overflow!");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear+=1;
        call[rear]=callerid;
        printf("\nCaller ID added -> %d",callerid);
    }
}

void delete(){
    if(front==-1){
        printf("\nQeue underflow!");
    }
    else{
        printf("\nCaller ID deleted -> %d",call[front]);
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }
}

void display(){
    if(rear==-1 || front==-1){
        printf("\nQueue is empty!");
    }
    else{
        printf("\nCaller ID list:\n");
        for(int i=front;i<=rear;i++){
            printf("%d\t",call[i]);
        }
    }
}