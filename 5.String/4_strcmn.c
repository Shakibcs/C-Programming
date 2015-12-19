#include<stdio.h>
#include<string.h>
int main()
{
    char str_1[40],str_2[40],y=0,space[2]=" ";
    gets(str_1);
    gets(str_2);
    if(strcmp(str_1,str_2)==0)
    puts(str_1);
    else
    {
        strcat(str_1,strcat(space,str_2));
        puts(str_1);
    }

}
