double fact(int n)
{
    int i,j=1;
    for(i=1;i<=n;i++)
    {
        j*=i;
    }
    return (double)j;
}
int main()
{
    int m,n;
    double result;
    scanf("%d %d",&m,&n);
    result=fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0f", result);
    return 0;
}