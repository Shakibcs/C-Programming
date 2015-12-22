#include<stdio.h>
void main()
{
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%4==0)
        printf("year is leap year");
        else
            printf("year is not leap year");
        }
        else
        {
            if(year%4==0)
            printf("year is leap year");
            else
            printf("year is not leap year");
        }
}
