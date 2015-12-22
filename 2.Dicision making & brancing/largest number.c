#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("Largest number is=%d",a);
        else
        printf("Largest number is=%d",c);
    }
    else
    {
        if(b>c)
        printf("Largest number is=%d",b);
        else
        printf("Largest number is=%d",c);
    }
}
