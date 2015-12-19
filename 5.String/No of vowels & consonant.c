#include<stdio.h>
void main()
{
    char x[100];
    int i,j=0,k=0,p;
    printf("Enter a sentence : ");
    gets(x);
    printf("vowels are : ");
    for(i=0;x[i]!='\0';i++)
    {
        p=x[i];
        if(p>=65 && p<=90 || p>=97 && p<=122){
        if((x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')||(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'))
        {
            printf ("%c ",x[i]);

            j++;
        }
        }


}     printf("\nVowels are %d\n",j);

     getch();
}

