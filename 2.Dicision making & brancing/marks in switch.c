#include<stdio.h>
void main()
{
    int index,mark;
    printf("Enter aceived mark\n");
   scanf("%d",&mark);
 index=mark/10;
 switch(index)
    {
        case 8:case 9:case10:
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
        break;
        printf("c");
        break;
        default:
        printf("FALL");
        break;
    }
}
