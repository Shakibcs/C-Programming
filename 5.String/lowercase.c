#include<stdio.h>
int main()
{
    char x[100];
    int i;
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]<=97&&x[i]!=' ')
        {
            x[i]=x[i]+32;
        }
    }
  puts(x);
}
