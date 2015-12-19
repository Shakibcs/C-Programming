#include<stdio.h>
char grade(int a);
main()
{
    int m,g;
    printf("Enter Marks :");
    scanf("%d",&m);
    g=grade(m);
    printf("Grade is : %c",g);
}
char grade(int a)
{
    switch(a/10)
    {
       case 8: case 9 :case 10:
       return ('A');
       break;
       case  7:
       return ('B');
       break;
       case 6:
       return ('C');
       break;
       case 5:
       return ('D');
       break;
       case 4:
       return ('E');
       default:
       return ('F');
    }
}
