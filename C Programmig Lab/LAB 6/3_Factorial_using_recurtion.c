#include<stdio.h>
int get_fact(int x);
main()
{
    int a=10,f;
    f=get_fact(a);
    printf("!%d = %d",a,f);
}
int get_fact(int x)
{
    if(x==1)
    return 1;
    else
    return (x*get_fact(x-1));
}
