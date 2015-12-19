#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i;
    printf("Enter a string : ");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    printf("\nLength of the string is : %d",i);
    getch();
}
