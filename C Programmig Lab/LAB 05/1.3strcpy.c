#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int i;
    printf("Enter string 1 : ");
    gets(str1);
    printf("\nCopy of the string is : ");
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("\"%s\"",str2);
    getch();
}
