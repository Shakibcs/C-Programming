#define N 10   /*SYMBOLIC CONSTANT*/
main()
{
    int count;
    float sum, average, number;
    sum=0;
    count=0;
    while(count<N)
    {
        scanf("%f",&number);
        sum=sum+number;
        count=count+1;
    }
    average=sum/N;
    printf("N=%d sum=%f",N,sum);
    printf("Average=%f",average);
}
