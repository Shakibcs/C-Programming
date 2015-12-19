#include<stdio.h>
#include<string.h>
int main()
{
    char x[200],x1[200];
    int i;
    printf("enter your string:");
    gets(x);
    printf(" copy of this string is :");
    for(i=0;x[i]!='\0';i++)
    {
        x1[i]=x[i];
    }
    x1[i]='\0';
    printf("%s",x1);
    return 0;

}
