#include<stdio.h>
int main()
{
    int n,i,j,p;
    printf("Enter n;");
    scanf("%d",&n);
    p=1;
    for(i=0;i<n;i++)
    {

        for(j=0;j<=i;j++)
        {

            printf("%d",p++);

        }
        printf("\n");
    }
    getch();
}



