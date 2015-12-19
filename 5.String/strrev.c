#include<stdio.h>
#include<string.h>
int main()
{
    char x[200],x1[200];
    int i,a=0;
    printf("enter your string:");
    gets(x);
     while(x1[a]!='\0')
      {
          a++;
      }
       for(i=0;i<a;i++)
    {
        x1[i]=x[a];

    }
    puts(x1);

}
