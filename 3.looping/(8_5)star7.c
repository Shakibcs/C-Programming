#include<stdio.h>
int main()
{
    int i,j,k,n,p,q,r=0,s,t;
    printf("Pls Enter n:");
    scanf("%d",&n);
    p=n;
    q=n;
    t=n/2;
    if(n%2==1)
    r=1;
    for(i=0;i<t+1;i++)
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
        if(p<1)
        {
            break;
        }

    }
    //Second Part
        for(i=0;i<n/2;i++)
       {
            for(k=0;k<t-1;k++)
            {
                printf(" ");
            }t=t-1;
            for(j=0;j<r+2;j++)
            {
                printf("*");
            }r=r+2;

            printf("\n");
        }


    getch();
}
