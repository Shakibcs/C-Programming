#include<stdio.h>
int main()
{
    int n,p,sum;
    printf("Pls Enter n:");
    scanf("%d",&n);
    for(p=1,sum=0;p<=n;p++)
    {
        printf("%d+",p);
        sum=sum+p;

    }
    printf("=%d",sum);
    return 0;
}

