#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("largest number is a");
        else
        printf("largest number is c");
    }
    else{
    if(b>c)
    printf("largest number is b");
    else
    printf("largest number is c");
    }
}
