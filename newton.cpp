// Numerical Analysis Program to find the real root of a function using Newton Raphson Method
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define t 100

float function(float x)
{
    float y=(x*x*x-2*x-5);
    return y;
}

float dfunction(float x)
{
    float dy=(3*x*x-2);
    return dy;
}

int main()
{
    float x=2,x1;
    int p[20];
    int i;
    
    for(i=1;i<t;i++)
    {
        x1=x-(function(x)/dfunction(x));
        
        printf("x%d = %f\n",i,x1);
        
        if(function(x)< 0.001 && function(x)> 0.0000)
         break;
         x=x1;
        
    }
    
    printf("\nApproximate root is: %8f ",x1);
    printf("\n");
    getch ();
    return 0;
}
