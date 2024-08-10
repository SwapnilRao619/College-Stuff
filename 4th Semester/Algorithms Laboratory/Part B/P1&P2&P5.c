// PA [P1 and P2 and P5]

#include<stdio.h>
#include<limits.h>
#define V 6
#define INF INT_MAX

int g[V][V],v[V],d[V],p[V];
char c[V]="FDEACB";

void prims(){
    for(int i=0;i<V;i++) d[i]=INF,v[i]=0;
    d[0]=0;
    for(int i=0;i<V-1;i++){
        int u=-1,min=INF;
        for(int j=0;j<V;j++)
            if(!v[j] && d[j]<min) min=d[j],u=j;
        v[u]=1;
        for(int j=0;j<V;j++)
            if(!v[j] && g[u][j] && g[u][j]<d[j]) d[j]=g[u][j],p[j]=u;
    }
}

void main(){
    g[0][1]=g[1][0]=7; g[0][2]=g[2][0]=8; g[1][2]=g[2][1]=3;
    g[1][3]=g[3][1]=6; g[2][3]=g[3][2]=4; g[2][4]=g[4][2]=3;
    g[3][4]=g[4][3]=2; g[3][5]=g[5][3]=5; g[4][5]=g[5][4]=2; 
    /*g[0][1]=g[1][0]=5; g[0][3]=g[3][0]=4;
    g[1][2]=g[2][1]=7; g[1][3]=g[3][1]=9;
    g[2][3]=g[3][2]=9; g[2][4]=g[4][2]=5;
    g[3][4]=g[4][3]=8; For P5*/ //Along with this, make changes at c[V] and #define and other changes for P5.
    prims();
    int cost=0;
    for(int i=1;i<V;i++){
        cost+=d[i];
        printf("%d-%d: %d\n",p[i],i,d[i]);
    }
    printf("\nTotal cost: %d\n",cost);
    for(int i=0;i<V;i++) printf("%d-%c\n",i,c[i]);
}