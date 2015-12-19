#include<stdio.h>
int main()
{
    int i;
    float x[5],max=0;
    printf("Pls give 5 number:\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        if(max<=x[i])
        {
            max=x[i];
        }
    }
    printf("Largest :%f",max);
    getch();
}
