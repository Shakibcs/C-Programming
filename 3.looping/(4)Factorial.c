#include<stdio.h>
int main()
{
    int n,p,q;
    printf("Pls Enter n:");
    scanf("%d",&n);
    if(n==0)
   {
      q=1;
   }
    else
    {
        for(p=1,q=1;p<=n;p++)
        {
            q=q*p;
        }

    }
        printf("%d! =%d",n,q);
        getch();
    }
