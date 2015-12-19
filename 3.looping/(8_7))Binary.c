#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {

            if(j==i)
            {
                printf("0");
            }
            printf("1");
        }
        if(i==j)
        {
            printf("0");
        }
        printf("\n");
    }
}
