//Binomial Coders Develope.........
#include<stdio.h>
#define MUKIT 5
#define NAZMUL 5
int main()
{
    int x[MUKIT][NAZMUL];
    float y[MUKIT],m[NAZMUL];
    int j,i,n;
    for(i=1;i<NAZMUL;i++)
    {
         m[i]=0;
        printf("Enter Number of Student:");
        scanf("%d",&n);
        printf("Enter Marks:\n");
        for(j=1;j<=n;j++)
        {

            scanf("%d",&x[i][j]);
            m[i]=m[i]+x[i][j];
            y[i]=m[i]/n;


        }








    }
    for(i=1;i<MUKIT;i++)
    {
      printf ("Total student serial no_%d avarage will:\t%.2f\n",i,y[i]);
    }
    printf("\n");
    printf("This is Binomial CODERS presentation...developed by MUKIT & NAZMUL");
    getch();
    }


