#include<stdio.h>
int main()
{
    int n,i,j,k,p;
    char*ch;
    scanf("%c",&ch);
    printf("Pls Enter n:");
    scanf("%d",&n);
    p=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%c",ch);
        }printf("\n");
        p--;
        for(k=0;k<(n-p);k++)
        {
            printf(" ");
        }

    }
    getch();

}

