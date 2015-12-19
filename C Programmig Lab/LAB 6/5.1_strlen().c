#include<stdio.h>
int get_strlen(char s[]);
main()
{
    char s[]="Shakib";
    int l;
    l=get_strlen(s);
    printf("%d",l);
}
int get_strlen(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++);
    return (i);
}
