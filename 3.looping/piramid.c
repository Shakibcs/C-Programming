#include<stdio.h>
void main()
{
    int i,j,n,m;
    printf("how many lines\n");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf("     ");
        m=i;
        for(j=1;j<=i;j++)
        printf("%5d",m++);
        m-=2;
        for(j=1;j<i;j++)
        printf("%5d",m--);
        printf("\n");
    }
}
