#include<stdio.h>
void main()
{
    int x,n,i=1,sum=1;
    printf("pls give the values of x and n:");
    scanf("%d%d",&x,&n);
    while(i<=n){
    sum=sum*x;
    i++;
    }
    printf("\nx =%d;n=%d;x to the power n=%d",x,n,sum);
}
