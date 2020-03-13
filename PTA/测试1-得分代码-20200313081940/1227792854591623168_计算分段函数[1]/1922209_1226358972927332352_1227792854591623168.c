int main()
{
    double x,result;
    scanf("%1f",&x);
    if (x!=0)
    {
        result=1/x;
    }
    else
    {
        result=0;
    }
    printf("f(%.1f)=%.1f",x,result);
    system("pause");
    return 0
}