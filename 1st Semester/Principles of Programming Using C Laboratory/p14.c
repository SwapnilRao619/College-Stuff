#include<stdio.h>
void main()
{
    int m,n,i,j,a[100][100],b[100][100],s[100][100];
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of the matrix 1: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of the matrix 2: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The sum of matrix 1 and matrix 2:\n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
}