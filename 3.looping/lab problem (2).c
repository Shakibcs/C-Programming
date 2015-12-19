#include<stdio.h>
#define N 8
main()
{
    int x[8]={1,2,3,4,8,10,11,15},i,j,t;
    for(i=0;i<N;i++)
    {
        x[i]=x[i]+100;
    }
    for(i=0,j=N-1;i<j;i++,j--)
    {
        t=x[i];
        x[i]=x[j];
        x[j]=t;
    }
    for(i=0;i<N;i++)
    printf("%d, ",x[i]);
}
