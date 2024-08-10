/* Write a C program to evaluate a valid postfix expression using stack.
Assume that the postfix expression is read as a single line consisting of
non-negative single digit operands and binary operators. The operators
are + - * and /. */

#include<stdio.h>
#include<ctype.h>
#define MAX 100

int stack[MAX],top=-1;
void push(int x);
int pop();

int main(){
    char pe[100],*e;
    int n1,n2,n3,num;
    printf("\nEnter the postfix expression: ");
    scanf("%s",pe);
    e=pe;
    while(*e!='\0'){
        if(isdigit(*e)){
            num = *e-48;
            push(num);
        }
        else{
            n1=pop();
            n2=pop();
            switch(*e){
                case '+': n3=n1+n2;
                break;
                case '-': n3=n2-n1;
                break;
                case '*': n3=n1*n2;
                break;
                case '/': n3=n2/n1;
                break;
            }
            push(n3);
        }
        e++;
    }
    printf("\nThe value of the postfix expression %s is: %d",pe,pop());
}

void push(int x){
    stack[++top]=x;
}

int pop(){
    return stack[top--];
}