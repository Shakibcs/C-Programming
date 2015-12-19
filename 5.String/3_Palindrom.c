#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    gets(str);
    strcpy(rev,str);
    strrev(rev);
    puts(rev);
    puts(str);
    if(strcmp(rev,str)==0)
    printf("The string is palindrome");
    else
    printf("The string is not palindrome");

}
