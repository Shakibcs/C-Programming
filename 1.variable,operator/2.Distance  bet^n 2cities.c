#include<stdio.h>
void main()
{
    float x1,y1,x2,y2,d;
    printf("Enter 1st coordinate\n:");
    scanf("%f%f",&x1,&y1);
    printf("Enter 2nd coordinate\n:");
    scanf("%f%f",&x2,&y2);
    d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("distance=%f",d);
}
