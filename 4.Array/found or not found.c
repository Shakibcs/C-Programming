#include<stdio.h>
void main()
{
    int x[5]={30,40,37,23,50},i,y;
    printf("enter the value of y\n:");
    scanf("%d",&y);
    for(i=0;i<5;i++)
    {
        if(x[i]==y)
        break;
    }
    if(i<5)
    printf("found");
    else
    printf("not found");
}
