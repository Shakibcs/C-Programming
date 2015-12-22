#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,x,y,z;
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    x=a*a;
    y=b*b;
    z=c*c;
    if(a>b&&a>c&&(x=y+z))
    printf("%d %d %d are the sides of the right angle triangle\n",a,b,c);
    else if(b>a&&b>c&&(y=x+z))
    printf("%d %d %d are the sides of the right angle triangle\n",a,b,c);
    else if(c>a&&c>b&&(z=y+z))
    printf("%d %d %d are the sides of the right angle triangle\n",a,b,c);
    else
    printf("The values are not the sides of\the right angle triangle");

}
