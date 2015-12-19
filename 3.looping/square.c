
#include<stdio.h>
int main()
{
    int n,p,q;
    printf("Pls Enter n:");
    scanf("%d",&n);
    for(p=1;p<=n;p=p+2)
    {
        q=p*p;
        printf("%d, ",q);

    }
    return 0;
}

