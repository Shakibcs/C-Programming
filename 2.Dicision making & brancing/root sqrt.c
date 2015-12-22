

#include<stdio.h>
void main()
{
    int i,n;
    float root;
    printf("enter a number:\a\a\a\a\a\a");
    scanf("%d",&n);
    for(i=1;i<=100;i++)
    if(i%2==1){
    continue;
    }
    root=sqrt(i);
    printf("f\n",root);
}
