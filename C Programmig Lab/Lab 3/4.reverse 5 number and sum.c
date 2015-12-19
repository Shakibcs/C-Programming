#include<stdio.h>
void main()
{
    int mod,n,q,sum=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
        while(1)
    {
        mod=n%10;
        printf("%d",mod);
        sum=sum+mod;
        q=n/10;
        if(q==0)
        {
            break;
        }
        n=q;
    }
    printf("\nsum=%d",sum);

    getch();
}
