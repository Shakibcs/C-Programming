#include<stdio.h>
void main()
{
    int i,n,sum=0;
  float average;
    for(i=0;i<6;i++)
    {
        printf("enter a number\n");
        scanf("%d",&n);

        sum=sum+n;


    }
    average=sum/5.0;
        printf("average is %f\n",average);
}
