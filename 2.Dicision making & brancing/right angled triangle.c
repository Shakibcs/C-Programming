#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,AB,BC,CA;
    printf("Enter the value of three sides of a right angled triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    AB=a*a;
    BC=b*b;
    CA=c*c;
    if(a>b&&a>c&&(AB==BC+CA))
    printf("%d %d %d are the sides of a right angled triangle\n",a,b,c);
    else if(b>a&&b>c&&(BC==CA+AB))
    printf("%d %d %d are the sides of a right angled triangle\n",a,b,c);
    else if(c>a&&c>b&&(CA==AB+BC))
    printf("%d %d %d are the sides of a right angled triangle\n",a,b,c);
    else
    printf("%d %d %d are not the sides of a right angled triangle\n",a,b,c);
}
