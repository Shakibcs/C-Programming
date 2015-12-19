#include<stdio.h>
main()
{
    int i,j,n;
    float num[1000],median,k;
    printf("Enter how many numbers you want to input:\n");
    scanf("%d",&n);
    printf("Enter your numbers:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&num[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(num[j]<num[j+1])
            {
            k=num[j];
            num[j]=num[j+1];
            num[j+1]=k;
            }
        }
    }
    if(n%2==0)
    {
        median=(num[n/2]+num[n/2+1])/2;
    }
    else
    {
        median=num[n/2+1];
    }
    printf("The median is=%f",median);
}
