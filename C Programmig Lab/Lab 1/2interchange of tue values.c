#include<stdio.h>
int main()
{
 int C,D,E;
 printf("Enter two numbers C and D\n");
 scanf("%d%d",&C,&D);

 E=C;
 C=D;
 D=E;
 printf("After interchange\nValue of C=%d\nValue of D=%d\n",C,D);
 return 0;
}
