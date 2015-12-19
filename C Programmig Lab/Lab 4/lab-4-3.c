#include<stdio.h>
main()
{
    int i,j,n;
    float num[1000],k;
    printf("Enter how many numbers you want to input:\n");
    scanf("%d",&n);
    printf("Enter your numbers:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&num[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
        k=num[j];
        num[j]=num[j+1];
        num[j+1]=k;

        }
    }
    printf("After reverse:\n");
    for(i=1;i<=n;i++)
    {
        printf("\t%f\n",num[i]);
    }
}

