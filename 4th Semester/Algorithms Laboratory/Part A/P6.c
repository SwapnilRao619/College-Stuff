// DFS

#include<stdio.h>
#define MAX 100

int am[MAX][MAX],vis[MAX],n;

void dfs(int v){
    vis[v]=1;
    printf("%d\t",v);
    for(int i=0;i<n;i++)
        if(am[v][i] && !vis[i])
            dfs(i);
}

void main(){
    printf("\nEnter the number of vertices: ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&am[i][j]);
    printf("\nDFS traversal:\n");
    dfs(0);
}