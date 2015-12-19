#include <stdio.h>
int main()
{
char str[500];
int i;
printf("Enter a sentence : ");
gets(str);
printf("\nThe sentence in uppercase is : ");
for(i = 0; i < 500; i++)
{
    if(str[i]>=97&&str[i]<=122)
    {
        str[i]='A'+(str[i]-'a');
    }
}
    printf("%s\n",str);
    getch();
}

