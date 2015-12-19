#include<stdio.h>
main()
{
    int num[1000]={0},i,j=0,k=0,n;
    printf("Enter how many numbers you want to input:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    num[i]=rand();
    }
    printf("Even numbers are:\n");
    for(i=1;i<=n;i++)
    {
        if (num[i]%2==0)
        {
        j++;
        printf("\t%d",num[i]);
        }
    }
    printf("\nOdd numbers are:\n");
    for(i=1;i<=n;i++)
    {
        if (num[i]%2==1)
        {
        k++;
        printf("\t%d",num[i]);
        }
    }
    printf("\nEven number=%d\n\nodd number=%d\n",j,k);
}

