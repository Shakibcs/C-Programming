#include<stdio.h>
void main()
{
    float x[5],max;
    int i;
    for(i=0;i<5;i++)
    {
        printf("plz enter x[%d]=",i);
        scanf("%f",&x[i]);
    }
    max=x[0];
    for(i=0;i<5;i++)
    {
        if(max<x[i])
        max=x[i];
    }
    printf("max is %f",max);
}

