#include<stdio.h>
int main()
{
    int n,i,j,p;
    printf("Enter n;");
    scanf("%d",&n);
    p=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",p);
        }p++;
        printf("\n");
    }
    getch();
}

