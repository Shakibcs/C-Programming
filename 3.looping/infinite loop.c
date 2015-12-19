#include<stdio.h>
void main()
{
    int p,q,mod,sum=0;
    printf("enter the value of p");
    scanf("%d",&p);
    while(1)
    {
        mod=p%10;
        printf("%d",mod);
        q=p/10;
        sum=sum+mod;
        if(q==0)
        {
        break;
        }
        p=q;
    }
    printf("\n sum=%d",sum);

}
