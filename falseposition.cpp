// Numerical Analysis Program to find the real root of a function using Falsi Position Method..
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define p 50

float function(float x)
{
    float y=x*x*x-2*x-5;
    return y;
}
int main()
{
    int i=0;
    float fa,fb,y=0,x=0,z=0,a=1,b=2;


    for(i=0;i<p;i++)
    {
        fa=function(a);
        fb=function(b);

        if(fa<0 && fb<0)
        {
            a++;
            b++;
        }
        else if(fa>0 && fb>0)
        {
            a--;
            b--;
        }

        if(fa<0 && fb>0)
            break;
    }

    printf("SL.\t a\t    b\t       x\t  y\t");
    printf("\n");

    for(i=1;i<p;i++)
    {
        x=((a*fb)-(b*fa))/(fb-fa);
        y=function(x);
        printf("%2d %10f %10f %10f %10f",i,a,b,x,y);
        printf("\n");
        if((x-a)< 0.0002)
            break;
        if(y>0){
            b=x;
            fb=y;}
        else if(y<0){
            a=x;
            fa=y;}
        else
           break;
    }

    printf("\nBecause Diff. is %f less than 0.001 so, approximate root is %f :) :)",(x-a),x);
    getch();
}
