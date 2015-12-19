#include<stdio.h>
void main()
{
    char x[100];
    int i,j=0,k=0,p;
    printf("Enter a sentence : ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        x[i];
        if(x[i]>=65 && x[i]<=90 ||x[i]>=97 && x[i]<=122){
        if((x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')||(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'))
        {

            j++;
        }
        else
        {
            k++;
        }
        }
    }
     printf("\nVowels are %d\n",j);
     printf("\nConsonants are %d\n",k);
     getch();
}
