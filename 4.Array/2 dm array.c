#include<stdio.h>
void main()
{
    int i,j;
    int s[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++){
        printf("\n Element [%d][%d]=%d",i,j,s[i][j]);
        }
    }
}
