#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("Enter Your String:");
    gets(ch);
    printf("\nUppercase of Your String:");
    strupr(ch);
    puts(ch);
}
