#include<stdio.h>
main()
{
    int num[1000],i,j=1,L_A[1000]={0},n;
    float sum=0.0,average;
    printf("Enter how many numbers you want to input:\n");
    scanf("%d",&n);
    printf("Enter your numbers:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    average=sum/n;
    printf("\naverage=%f\nGreater numbers are:\n",average);
    for(i=1;i<=n;i++)
    {
        if(num[i]>average)
        {
            L_A[j]=num[i];
            printf("\t%d",L_A[j]);
            j++;
        }
    }
    printf("\nTotal large number=%d",j-1);

    }
