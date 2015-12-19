#include<stdio.h>
int main()
{
    int i,j,k,n,p,q,r,s;
    printf("Pls Enter n:");
    scanf("%d",&n);
    p=n;
    q=n;
    r=n;
    s=n;
    for(i=0;i<n;i++)
    {

        for(k=0;k<i;k++)
            {
                printf(" ");
            }
        for(j=0;j<p;j++)
        {
            printf("*");
        }
        p=p-2;
        q=q-1;

        printf("\n");

        {

        }
        for(j=0;j>p;j--)
        {
            printf("*");

        }
       /* {
            printf(" ");
        }
        printf("\n");
        for(k=0;k>n-q;k--)
        {
            printf(" ");
        }*/

    }
    getch();
}

