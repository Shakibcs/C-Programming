#include<stdio.h>
main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>0)
    printf("The number is POSITIVE");
    else if(a<0)
    printf("The number is NEGATIVE");
    else if(a==0)
    printf("The number is ZERO");
}
