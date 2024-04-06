#include<stdio.h>
void main()
{
    int m,n,i,j,a[100][100],b[100][100],k,mul[100][100];
    printf("R and C of 1: ");
    scanf("%d %d",&m,&n);
    printf("Elements of 1: ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("R and C of 2: ");
    scanf("%d %d",&m,&n);
    printf("Elements of 2: ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           mul[i][j]=0;
           for(k=0;k<m;k++)
           {
               mul[i][j]+=a[i][k]*b[k][j];
           }
        }
    }
    printf("The multiplied matrix:\n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}