#define COLMAX 12
#define ROWMAX 12
main()
{
    int row=1,column,y;
    do
    {   column=1;
    do
    {
        y=row*column;
        printf("%4d",y);
        column+=1;

    }
    while(column<=COLMAX);
    printf("\n");
    row+=1;

    }
    while(row<=ROWMAX);
    printf("----------------------");
}
