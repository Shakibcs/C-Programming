#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
int minus(int a,int b);
main()
{
    int x=10,y=35,m;
    max(x,y);
    min(x,y);
    m=minus(x,y);
}
int max(int a,int b)
{
    float r;
    r=0.5*(a+b+minus(a,b));
    printf("Maximum is :%.2f",r);

}
int min(int a,int b)
{
    float r;
    r=0.5*(a+b-minus(a,b));
    printf("Minimum is:%.2f",r);
}
int minus(int a,int b)
{
    int r;
    r=a-b;
    if(r<0)
    r=r*(-1);
    return (r);
}
