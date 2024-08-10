// BFS

#include<stdio.h>
#define MAX 100

int am[MAX][MAX],vis[MAX],n,q[MAX],f=0,r=-1;

void bfs(int v){
    vis[v]=1;
    q[++r]=v;
    while(f<=r){
        v=q[f++];
        printf("%d\t",v);
        for(int i=0;i<n;i++)
            if(am[v][i] && !vis[i])
                vis[i]=1,q[++r]=i;
    }
}

void main(){
    printf("\nEnter the number of vertices: ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&am[i][j]);
    printf("\nBFS traversal:\n");
    bfs(0);
}