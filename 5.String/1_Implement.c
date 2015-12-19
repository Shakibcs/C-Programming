#include<stdio.h>
#include<string.h>
#include<conio.h>
void get_strrev(char s[])
{
    int i,j,t;
    for(i=0,t,j=strlen(s)-1;i<strlen(s);i++,j--)
    {
        if(i<j)
        {
            t=s[j];
            s[j]=s[i];
            s[i]=t;

        }
    }
    puts(s);
}
void get_strcat(char s1[],char s2[])
{
    int i,j,s3[100];
    //get_strrev(s1);
    for(i=strlen(s1),j=0;i<(strlen(s1)+strlen(s2));i++,j++)
    {

        s1[i]=s2[j];
    }puts(s1);

}
void main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    get_strrev(str1);
    get_strcat(str1,str2);

}

