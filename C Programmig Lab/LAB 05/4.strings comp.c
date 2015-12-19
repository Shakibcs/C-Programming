#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int x,y;
    printf("Enter string no 1 : ");
    gets(str1);
    printf("\nEnter string no 2 : ");
    gets(str2);
    x=strcmp(str1,str2);
    if(x!=0)
    {
        printf("\nStrings are not equal\n");
        strcat(str1," ");
        strcat(str1,str2);
        printf("\n%s",str1);
    }
    else
    {
        printf("\n%s",str1);
    }
    getch();
}
