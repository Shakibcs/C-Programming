#include<stdio.h>
#include<string.h>
#include<conio.h>
#define M 100
void main()
{
    int i,j,k,l;
    char str[M],str1[M],ch[M],num[M];
    gets(str);
    strcpy(str1,str);
    for(i=0;i<strlen(str);i++)
    {
        k=0;
        for(j=0;j<strlen(str);j++)
        {
            if(str[i]==str1[j])
            {
                k++;
            }
        }
        if(k>0)
        {
            ch[i]=str[i];
            num[i]=k;
        }
    }
    for(i=0;i<strlen(str);i++)
    {

        if(ch[i]!=ch[i+1])
        printf("%c =%d\n",ch[i],num[i]);
    }
}
