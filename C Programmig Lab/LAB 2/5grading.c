#include<stdio.h>
void main()
{
    int marks,index;
    printf("Enter the marks :");
    scanf("%d",&marks);
    index=marks/10;
    switch(index)
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
        printf("FAIL");
    }
    getch();
}
