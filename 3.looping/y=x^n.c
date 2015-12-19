

#include<stdio.h>
main()
{
    int n,i;
    int x,y=1;
    printf("enter x and n :\n");
    scanf("%d%d",&x,&n);
    i=1;
    while(i<=n)
    {
        y=y*x;
        i++;
    }
    printf("n is=%d\nxis%d\nyis%d",n,x,y);
}
