#include<stdio.h>
int main()
{
    char str[100];
    int vcount=0,ccount=0,i;
    printf("Enter a line of text\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||//
        str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        vcount++;
        else if(str[i]!=' ')
        ccount++;
    }
    printf("No of Vowels:%d\nNo of Consonent:%d",vcount,ccount);
}
