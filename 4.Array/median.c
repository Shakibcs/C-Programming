#include<stdio.h>
void main()
{
    float median=0;
    int i,n,array[100];
    printf("how many numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter number[%d]:",i+1);
        scanf("%d",&array[i]);
    }
    if(n%2==1)
{
    median=array[n/2];
printf("\n median=%f\n",median);
}
else
{
    median=(array[(n/2)-1]+array[n/2])/2.00;
        printf("\n median=%f\n",median);
}
}
