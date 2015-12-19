#include<stdio.h>
void get_result(int marks)
{
    int index;
    index=marks/10;
    switch(index)
    {
        case 10:
        case 9:
        case 8:
        printf("The grade is A+");
        break;
        case 7:
        printf("The garde is A");
        break;
        case 6:
        printf("The garde is B+");
        break;
        case 5:
        printf("The grade is B");
        break;
        case 4:
        printf("The grade is C");
        break;
        default:
        printf("FAIL");
        break;
    }
}
void main()
{
    int index,marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    printf("\n");
    get_result(marks);
    getch();
}
