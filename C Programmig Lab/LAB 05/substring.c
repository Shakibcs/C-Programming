#include<stdio.h>
void main()
{
    char x1[100],x2[100];
    int i,test,j;
    printf("String 1 :");
    gets(x1);
    printf("string 2 :");
    gets(x2);
    for(i=0;x1[i]!='\0';i++)
    {
        for(j=0;x2[j]!='\0';j++)
        {
           if(x1[i]==x2[j])
        {
            test=1;
            break;
        }
        }

    }
    if(test==1)
    {
        printf("Substring");
    }
    else
    {
        printf("Not substring");
    }
}
