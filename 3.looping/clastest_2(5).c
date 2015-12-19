#include<stdio.h>
int main()
{
    int i,j,n;
    printf("n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf("*");
            if(j%2==1)
            printf("$");
        }printf("\n");
    }
}
