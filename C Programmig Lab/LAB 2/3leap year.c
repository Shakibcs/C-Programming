#include<stdio.h>
main()
{
    int year;
    printf("Enter a Year\n");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
         printf("Year is leap year\n");
        else
        printf("year is not leap year\n");
    }
    else
    {
        if(year%4==0)
        printf("Year is leap year\n");
        else
        printf("year is not leap year\n");
    }
}
