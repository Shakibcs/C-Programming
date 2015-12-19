#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter any  2 num:");
	scanf("%d%d",&a,&b);
	for(i=a;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		break;
		}
		printf("GCD is %d",i) ;
		return 0;
	}
