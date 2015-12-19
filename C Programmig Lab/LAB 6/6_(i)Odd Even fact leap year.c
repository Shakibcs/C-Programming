#include<stdio.h>
int odd(int x);
int leap(int x);
int prime(int x);
int fact(int x);
main()
{
    int a =2013,f,v=10;
    odd(a);
    leap(a);
    prime(a);
    f=fact(v);
    printf("!%d = %d\n",v,f);
}
int odd(int a)
{
    if(a%2==0)
    printf("%d is Even\n",a);
    else
    printf("%d is Odd\n",a);
}
int leap(int a)
{
    if(a%4||a%100==0&&a%400)
    printf("%d is Leap Year\n");
    else
    printf("%d is not Leap Year\n");
}
int prime(int a)
{
    int b=2,ch=0;
    while(b<=a/2)
    {
        if(a%b==0)
        {
            printf("%d IS NOT PRIME\n",a);
            ch=1;
            break;
        }
        else
        {
            b++;
        }
    }
        if(ch==0)
        {
            printf("%d IS PRIME\n",a);

        }
}
int fact(int x)
{
    if(x==1)
    return 1;
    else
    return (x*fact(x-1));
    }

