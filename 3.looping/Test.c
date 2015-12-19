#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(a=214748100;a>0;a=a+100)
    {
    printf("%d ",a);
    }
    getch();
}
