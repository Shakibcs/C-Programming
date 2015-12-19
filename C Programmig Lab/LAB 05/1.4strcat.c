#include<stdio.h>
void get_strcat(char str1[],char str2[])
{
    char strcat[100];
    int i,j;
    for(i=0;str1[i]!='\0';i++)
    {
        strcat[i]=str1[i];
    }
    strcat[i]=' ';
    for(j=0;str2[j]!='\0';j++)
    {
        strcat[i+j+1]=str2[j];
    }
    strcat[i+j+1]='\0';
    printf("%s",strcat);
}
void main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    get_strcat(str1,str2);
}
