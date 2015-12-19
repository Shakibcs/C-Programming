#include<stdio.h>
void main()
{
    int i,n,result;
    printf("Enter the value of n :");
    scanf("%d",&n);
    result=5;
    for(i=n;i>0;i--)
    {
        result=result*i;
    }
    printf("The factorial of %d is %d",n,result);
    getch();
}
