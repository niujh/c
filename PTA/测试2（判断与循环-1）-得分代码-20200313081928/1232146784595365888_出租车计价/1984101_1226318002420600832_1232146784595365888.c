int main()
{
    float car,sum;
    int time,n;
    scanf("%f %d",&car,&time);
    if(car<=3)
    {
        sum=10;
    }
    else if(car>=10)
    {
        sum=24+(car-10)*3;
    }
    else
    {
        sum=10+(car-3)*2;
    }
    n=(time/5)*2;
    sum=sum+n;
    printf("%.0f",sum);
}