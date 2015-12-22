#include<stdio.h>
int main()
{
    int num;
    printf("enter achieved number\n");
    scanf("%d",&num);
    if(num<=100&&num>=80)
    printf("Grade is A+\n");
    else if(num<80&&num>=70)
    printf("Grade is A\n");
    else if(num<70&&num>=60)
    printf("Grade is B+\n");
    else if(num<60&&num>=50)
    printf("Grade is B\n");
    else if(num<50&&num>=40)
    printf("Grade is C\n");
    else if(num<40)
    printf("FAIL\n");
    else if(num>100)
    printf("Number is invalid\n");
    return 0;
}
