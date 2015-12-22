#include<stdio.h>
void main()
{
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks>=80&&marks<=100)
    {
        printf("\n welcome your grade is A+");
        }
     else if(marks>=70&&marks<80)
     {
         printf("\n your grade is A");
     }
     else if(marks>=60&&marks<70)
     {
         printf("\n your grade is B+");
     }
     else if(marks>=50&&marks<60)
     {
         printf("your grade is B");
     }
     else if(marks>=40&&marks<50)
     {
         printf("your grade is C");

     }
     else if(marks<40)
     {
         printf("sorry you are Failed");
     }
}
