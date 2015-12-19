#include<stdio.h>
void main()
{
    int i,n=5;
    float cgpa[5],sum=0;
    printf("Enter five numbers\n:");
    for(i=0;i<n;i++)
    {
        scanf("%f",&cgpa[i]);
        sum=sum+cgpa[i];
    }
    printf("sum is %f",sum);

}
