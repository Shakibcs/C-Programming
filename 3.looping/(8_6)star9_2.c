#include<stdio.h>
int main()
{
    int i,j,k,n,p,q=0,r=0,s=2;
    printf("Pls Enter n:");
    scanf("%d",&n);
    p=n/2;
    if(n%2==0)
    {
        q=1;
        r=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<p-i;j++)
        {
            printf(" ");

        }
        for(k=0;k<=i+q;k++)
        {
            printf("*");
        }q=q+1;
        printf("\n");
        if(i==n/2-r)
        {
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i+r;j++)
        {
            printf(" ");
        }
        for(k=0;k<n-s;k++)
        {
            printf("*");
        }s=s+2;
        printf("\n");
        if(i==n/2-1-r)
        {
            break;
        }

    }
}
