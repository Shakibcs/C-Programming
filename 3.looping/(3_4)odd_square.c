#include<stdio.h>
int main()
{
    int n,p;
    printf("Pls Enter n:");
    scanf("%d",&n);
    for(p=1;p<=n;p=p+2)
    {
        printf("%d+",p*p);

    }
    return 0;
}



