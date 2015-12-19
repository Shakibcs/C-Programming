#include<stdio.h>
void main()
{
int array[1000]={0},y,i=0,j,x,n;
printf("How many numbers you want to input:\n");
scanf("%d",&n);
array[n]=1;
printf("Numbers are:\n");
while(array[i]!=1)
{
y=0;
x=rand();
for(j=0;j<n;j++)
{
if(x==array[j])
{
y=1;
}
}
if(y==1)
{
continue;
}
array[i]=x;
printf("\t%d\n",array[i]);
i++;
}
}
