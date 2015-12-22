#define COLMAX 12
#define ROWMAX 12
main()
{
    int row=1,column,y;
    do
    {
        column=1;
    do
    {
        y=row*column;
        printf("%5d\n",y);
        column+=1;
    }
    while(column<=COLMAX);

    }
    while(row<=ROWMAX);
    printf("----------------------");
}
