#include<stdio.h>
void main()
{
    int marks,grade;
    printf("enter your marks");
    scanf("%d",&marks);
    grade=marks/10;
    switch(grade)
    {
    case 10:
    case 9:
    case 8:
    printf("A+");
    break;
    case 7:
    printf("A");
    break;
    case 6:
    printf("B+");
    break;
    case 5:
    printf("B");
    break;
    case 4:
    printf("C");
    break;
    default:
    printf("FALL");
    break;
}

}
