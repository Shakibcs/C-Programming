#include<stdio.h>
main()
{
    int mat1[10][10],mat2[10][10],mat3[10][10],i,j,n,m;
    printf("Enter how many rows & column you want to input:\n");
    scanf("%d%d",&n,&m);
    printf("Enter the value of matrix 1 rowwise:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the value of matrix 2 rowwise:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Addition of two matrices:\n");
    for(i=0;i<n;i++)
    {
        printf("|");
        for(j=0;j<m;j++)
        {
         mat3[i][j]=mat1[i][j]+mat2[i][j];
         printf("\t%d",mat3[i][j]);
        }
        printf("\t|\n");
    }
}

