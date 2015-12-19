#include<stdio.h>
int main()
{
    char x[200];
    int i;
    gets(x);
    for(i=0;x[i]!='\0';i++);
    printf("Your string length is %d",i);
    return 0;
}
