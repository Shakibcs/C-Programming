#include<stdio.h>
int get_fact(int x);
main()
{
    int n,r,f,p;
    printf("Enter n r:");
    scanf("%d %d",&n,&r);
    f=get_fact(n)/(get_fact(n-r)*get_fact(r));
    printf("%dC%d = %d\n",n,r,f);
    p=get_fact(n)/(get_fact(n-r));
    printf("%dP%d = %d\n",n,r,p);
}
int get_fact(int x)
{
    if(x==1)
    return 1;
    else
    return (x*get_fact(x-1));
}
