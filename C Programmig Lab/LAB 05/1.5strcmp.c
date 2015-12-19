#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    int i=0;
    printf("Enter string 1 : ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);
    while((str1[i]==str2[i])&&(str1[i]!='\0')&&(str2[i]!='\0'))
    {
        i++;
    }
    if(str1[i]==str2[i])
    {
        printf("Strings are equal");
    }
    else
    {
        printf("strings are not equal");
    }
    getch();
}
