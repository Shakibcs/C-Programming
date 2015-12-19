#include<stdio.h>
int main()
{
    int a=0,b=1,c=1,n,i;
    printf("Pls Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",c);
        c=a+b;
        a=b;
        b=c;
    }
    getch();
}
