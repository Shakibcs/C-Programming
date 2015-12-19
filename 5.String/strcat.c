#include<stdio.h>
int main()
{
    char x1[200],x2[100];
    int i;
    gets(x1);
    gets(x2);
    while(x1[i]=='\0')
      {
          x1[i]=x2[i];
            }
            x1[i]='\0';
            puts(x1);
}
