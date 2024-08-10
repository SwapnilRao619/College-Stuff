// DA

#include<stdio.h>
#include<limits.h>
#define V 7
#define INF INT_MAX

int g[V][V],v[V],d[V],p[V];
char c[V][15]={"SF","LA","DE","C","DA","B","NY"};

void dijk(){
    for(int i=0;i<V;i++) d[i]=INF,v[i]=0;
    d[0]=0;
    for(int i=0;i<V-1;i++){
        int u=-1,min=INF;
        for(int j=0;j<V;j++)
            if(!v[j] && d[j]<min) min=d[j],u=j;
        v[u]=1;
        for(int j=0;j<V;j++)
            if(!v[j] && g[u][j] && d[u]+g[u][j]<d[j]) d[j]=g[u][j]+d[u],p[j]=u;
    }
}

void main(){
    g[0][1] = g[1][0] = 3; g[0][2] = g[2][0] = 4; g[0][3] = g[3][0] = 5;
    g[1][4] = g[4][1] = 5; g[2][3] = g[3][2] = 6; g[2][4] = g[4][2] = 4;
    g[3][4] = g[4][3] = 5; g[3][5] = g[5][3] = 3; g[3][6] = g[6][3] = 4;
    g[5][6] = g[6][5] = 2; g[4][6] = g[6][4] = 6;
    dijk();
    for(int i=1;i<V;i++)
        printf("%s-%s: %d\n",c[0],c[i],d[i]);
}