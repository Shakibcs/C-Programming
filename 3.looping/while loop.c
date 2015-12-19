#include <stdio.h>
main()
{
    int sum,n;
    n=1;
    while(n<11)
    {
        sum+=n*n;
        n+=1;
    }
    printf("sum is=%d",sum);
}
