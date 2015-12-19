#include<stdio.h>
int main()
{
    int n, i,j,k;
    printf("Please Enter n:");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        if(k==1||k==n)
        {
            for(i=1;i<=n;i++)
            {
                printf("*");
            }
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                if(i==1||i==n)
                    printf("*");
                else
                    printf(" ");


            }
        }printf("\n");
    }


    getch();
    }



