#include<stdio.h>
#include<string.h>
int main(void)
{
char strA[80]= "A string to be used for demonstration purposes";
char strB[80];
strncpy(strB,strA,10);
strB[10]='\0';
puts(strB);
}
