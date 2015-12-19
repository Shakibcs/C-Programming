#include<stdio.h>
#include<string.h>
int main()
{
    char x[200],x1[200];
    int i=0;
    gets(x);
    gets(x1);
    while(x[i]==x1[i]&&x[i]!='\0'&&x1[i]!='\0')
    {
        i++;
    }
    if(x[i]=='\0'&&x1[i]=='\0')
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }

}
