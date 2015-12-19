#include<stdio.h>
void main()
{
    float cent,farn;
    printf("\n Enter temperature in centrigrade:");
    scanf("%f",&cent);
    farn=1.8*cent+32;
    printf("\n Fahrenheit equivalent is:%.2f",farn);


}
