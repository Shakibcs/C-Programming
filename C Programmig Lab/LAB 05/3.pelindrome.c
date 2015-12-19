#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int x;
    printf("Enter a string : ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    x=strcmp(str1,str2);
    printf("\n");
    if(x!=0)
    {
        printf("The string is not a pelindrome");
    }
    else
    {
        printf("The string is a pelindrome");
    }
    printf("\n");
    getch();
}
