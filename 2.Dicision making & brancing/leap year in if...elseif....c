#include<stdio.h>
main()
{
    int year;
    printf("Enter a number\n");
    scanf("%d",&year);
    if(year%100==0&&year%400==0)
    printf("The year is leap year");
    else if(year%100==0&&year%400!==0)
    printf("The year is not leap year");
    else if(year%100!=0&&year%4==0)
    printf("The year is leap year");
    else
    printf("The year is not leap year");
}
