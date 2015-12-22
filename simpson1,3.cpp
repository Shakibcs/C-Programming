#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
  float x[10],y[10],sum=0,h,x_1,x_2;
  int n,i,j,k=0;
  
  printf("\nInput Number of Data Inputs: ");
  scanf("%d",&n);
  printf("\n\nEnter The Table Values set by set:\n");
  
           for(i=0; i<n; i++)
            {
              scanf("%f %f",&x[i],&y[i]);
            }
                
                 printf("\n\nInitial Value of x= ");
                 scanf("%f",&x_1);
                 printf("\n\nFinal Value of x= ");
                 scanf("%f",&x_2);
                 printf("\n\nWhat is The Segment Width??\n\t ");
                 scanf("%f",&h);
                 
                 
                     sum = sum + y[0];
                     
                     for(i=1;i<(n-1);i++)
                      {
                        if(k==0)
                        {
                         sum = sum + 4 * y[i];   // i=5 here but because of i++, it increases to 6 for any further use 
                         k = 1;
                        }
                        else
                        {
                         sum = sum + 2 * y[i];
                         k = 0;
                        }
                      }
                      
                     sum = sum + y[i];          // i=6 here
                     sum = sum * (h/3);
  
             printf("\n\n  Integral From %.4f To %.4f is = %f  ",x_1,x_2,sum);
 getch();
}

