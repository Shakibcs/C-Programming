#include<stdio.h>
void main()
{
    int x;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    if(x>0)
    {
        printf("The number is positive");
    }
    else if(x<0)
    {
        printf("The number is negative");
    }
    else
    {
    printf("The numbers is zero");
}
}
