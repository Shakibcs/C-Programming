#include<stdio.h>
int main()
{
  int a,b,c,a1,sum,num;
  printf("Enter a number of three digits\n:");
  scanf("%d",&num);
  printf("number is=%d\n:",num);
  a=num%10;
  a1=num/10;
  b=a1%10;
  c=a1/10;
  printf("reverse number is=%d%d%d\n:",a,b,c);
  sum=a+b+c;
  printf("Sum is=%d\n:",sum);
  return 0;

}
