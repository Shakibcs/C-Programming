#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("largest number is%d",a);
    }
    else if (b>a&&b>c)
    {
        printf("largest number is%d",b);
    }
    else
    printf("largest numbers is%d",c);
}
