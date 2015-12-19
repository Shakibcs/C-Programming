#include<stdio.h>
#include<string.h>
#include<conio.h>
#define M 100
void main()
{
    int i,j,k;
    char str[M],str1[M],ch[M],num[M];
    gets(str);
    strcpy(str1,str);
    for(i=0,k=0;i<strlen(str);i++)
    {
        for(j=0;i<strlen(str);j++)
        {
            if(str1[i]==str[j])
            {
                k++;
            }
        }
        if(k>0)
        {
            printf("%c =%d\n",str[i],k);
        }
    }
}
