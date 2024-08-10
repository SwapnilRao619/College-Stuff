// TS

#include<stdio.h>
#define MAX 100

int am[MAX][MAX],vis[MAX],n,stack[MAX],top=-1;

void dfs(int v){
    vis[v]=1;
    // printf("%d\t",v);
    for(int i=0;i<n;i++)
        if(!vis[i] && am[v][i])
            dfs(i);
    stack[++top]=v;
}

void ts(){
    for(int i=0;i<n;i++)
        if(!vis[i])
            dfs(i);
    while(top!=-1)
        printf("%d\t",stack[top--]);
}

void main(){
    printf("\nEnter number of vertices:\n");
    scanf("%d",&n);
    printf("\nEnter adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&am[i][j]);
    printf("\nTopological Sort order:\n");
    ts();
}