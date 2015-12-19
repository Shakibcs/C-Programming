#include<stdio.h>
void get_evenodd(int n)
{
    if(n%2==0)
    {
        printf("\nEven Number");
    }
    else
    {
        printf("\nOdd Number");
    }
    getch();
}
void get_leap(int year)
{
    if(((year%4==0)&&(year%100)!=0)||(year%400==0))
    {
        printf("\nThe year is a leap year");
    }
    else
    {
        printf("\nThe year is not a leap year");
    }
    getch();
}
void get_prime(int n)
{
    int i;
    i=2;
    while(i<n)
    {
        if(n%i==0)
        break;
        i++;
    }
        if(i<n)
        {
            printf("\nNot prime");
        }
        else
        {
            printf("\nPrime");
        }
        getch();
}
void get_fact(int n)
{
    int result=1,i;
    for(i=n;i>0;i--)
    {
        result=result*i;
    }
    printf("\nThe factorial of %d is %d",n,result);
    getch();
}
void get_fibo(int n)
{
    int first=0,second=1,next,i;
    for(i=1;i<=n;i++)
    {
        if(i<=1)
            next=i;
        else
        {
            next=first+second;
            first=second;
            second=next;
        }

            printf("%d ",next);
    }
    getch();
}
int main()
{
    int index,n,year,i;
    printf("-----------------Menu Oriented Program------------------");
    for(i=0;i<=index;i++)
    {
    printf("\n\n");
    printf("Enter your choice  1 to see odd even program \n\n");
    printf("Enter your choice  2 to see leap year program \n\n");
    printf("Enter your choice  3 to see prime not prime program \n\n");
    printf("Enter your choice  4 to see factorial program \n\n");
    printf("Enter your choice  5 to see fibonacci series program \n\n");
    printf("Enter your choice  6 to Exit \n\n");
    scanf("%d",&index);
    switch(index)
    {
        case 1:
        printf("\nA program to compute Even or Odd number\n\nPress Enter\n\n");
        getch();
        printf("Enter a number:");
        scanf("%d",&n);
        get_evenodd(n);
        break;
        case 2:
        printf("\nA program to compute Leap Year\n\nPress Enter\n\n");
        getch();
        printf("Enter a year:");
        scanf("%d",&year);
        get_leap(year);
        break;
        case 3:
        printf("\nA program to compute Prime number\n\nPress Enter\n\n");
        getch();
        printf("Enter a number:");
        scanf("%d",&n);
        get_prime(n);
        break;
        case 4:
        printf("\nA program to compute Factorial number\n\nPress Enter\n\n");
        getch();
        printf("Enter a number:");
        scanf("%d",&n);
        get_fact(n);
        break;
        case 5:
        printf("\nA program to compute Fibonacci series\n\nPress Enter\n\n");
        getch();
        printf("Enter the value of n:");
        scanf("%d",&n);
        get_fibo(n);
        break;
        case 6:
        printf("\n\n!!!! THANK YOU !!!! EXIT !!!! THE END !!!!\n\n");
        return 0;
        default:
        printf("Invalid input");
        break;
    }
        continue;
    }
}
