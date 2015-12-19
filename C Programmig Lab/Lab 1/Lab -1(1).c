#include<stdio.h>
int main()
{
    int a,b,add,sub,multi,div,mod;
    printf("Enter two numbers a and b\n");
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;
    mod=a%b;
    printf("Addition is=%d\n",add);
    printf("Substruction is=%d\n",sub);
    printf("Multiplication is=%d\n",multi);
    printf("Division is=%d\n",div);
    printf("Modulus is=%d",mod);
    return 0;

}
