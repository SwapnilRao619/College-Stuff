/* Write a C program 
a)  To construct a binary tree of integers. 
b) To traverse the tree using inorder, preorder and postorder traversal 
methods */

#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
    int data;
    struct tree *right;
    struct tree *left;
}T;
T *root=NULL;

void inser(){
    int value;
    printf("\nEnter value: ");
    scanf("%d",&value);
    T *nn=(T*)malloc(sizeof(T));
    if(nn==NULL){
        printf("\nNo space");
        return;
    }
    nn->data=value;
    nn->left=nn->right=NULL;
    if(root==NULL){
        root=nn;
        return;
    }
    T *temp=root;
    T *parent=NULL;
    while(1){
        parent=temp;
        if(value<temp->data){
            temp=temp->left;
            if(temp==NULL){
                parent->left=nn;
                return;
            }
        }
        else{
            temp=temp->right;
            if(temp==NULL){
                parent->right=nn;
                return;
            }
        }
    }
}

void prot(T *node){
    if(node!=NULL){ //
        printf("%d\t",node->data);
        prot(node->left);
        prot(node->right);
    }
}

void inot(T *node){
    if(node!=NULL){
        inot(node->left);
        printf("%d\t",node->data);
        inot(node->right);
    }
}

void poot(T *node){
    if(node!=NULL){
        poot(node->left);
        poot(node->right);
        printf("%d\t",node->data);
    }
}

void main(){
    int c;
    while(1){
        printf("\n1.Insert\n2.PrOT\n3.InOT\n4.PoOT\n5.Exit\n");
        scanf("%d",&c);
        switch(c){
            case 1: inser();
            break;
            case 2: prot(root);
            break;
            case 3: inot(root);
            break;
            case 4: poot(root);
            break;
            case 5: exit(0);
            default: printf("\nInvalid choice ");
        }
    }
}