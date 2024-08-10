/*P4:Write a C program to convert and print a given valid parenthesized infix
arithmetic expression to postfix expression. The expression consists of
single character operands and binary operators + - * /. Apply the
concept of stack data structure to solve this problem */

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

char infix[MAX], postfix[MAX];
char stack[MAX];
int top=-1;

void convert();
int prec(char);
void print();
void push(char);
char pop();
int isempty();

void main(){
    printf("Enter the correctly paranthesized infix expression: ");
    scanf("%s",infix);
    
    convert();
    print();
}

void convert(){
    int i, j=0;
    char symbol,next;
    for(int i=0;infix[i]!='\0';i++){
       symbol=infix[i];
       switch(symbol){
           case '(': push(symbol);
           break;
           case ')': while((next=pop())!='('){
               postfix[j++]=next;
           }
           break;
           case '+':
           case '-':
           case '*':
           case '/':
           while(!isempty() && prec(stack[top])>=prec(symbol)){
               postfix[j++]=pop();
           }
           push(symbol);
           break;
           default:
           postfix[j++]=symbol;
       }
    }
    while(!isempty()){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
}

int prec(char symbol){
    switch(symbol){
        case '+':
        case '-':
        return 1;
        case '*':
        case '/':
        return 2;
        default:
        return 0;
    }
}

void print(){
    int i=0;
    while(postfix[i]){
        printf("%c",postfix[i++]);
    }
}

void push(char c){
    if(top==MAX-1){
        printf("Stack overflow!");
        return;
    }
    top++;
    stack[top]=c;
}

char pop(){
    char c;
    if(top==-1){
        printf("Stack underflow!");
        exit(1);
    }
    c=stack[top];
    top-=1;
    return c;
}

int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}