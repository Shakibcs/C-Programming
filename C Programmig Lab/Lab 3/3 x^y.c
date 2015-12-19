#include<stdio.h>
void main()
{
    int i,sum=1,x,y;
    printf("Enter the values of x and y :");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        sum=sum*x;
    }
    printf("The result of x to the power y is %d",sum);
    getch();
}
