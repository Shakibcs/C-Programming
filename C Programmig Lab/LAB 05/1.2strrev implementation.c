#include<stdio.h>
void main()
{
    int i,len=0;
    char x[100],y[100];
    printf("Enter a string : ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        len++;
    }
    for(i=len-1;x[i]>=0;i--)
    {
        y[len-1-i]=x[i];
    }
    y[len]='\0';
    printf("\nThe reverse of given string is %s",y);
    getch();
}
