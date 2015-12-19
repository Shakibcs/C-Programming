#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Enter the two values :");
    scanf("%d%d",&a,&b);
    for(i=a;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
            break;
    }
    printf("\nGCD number of %d and %d is %d",a,b,i);
    getch();
}

