int main()
{
    int n,m;
    scanf("%d",&n);
    if(n>2100)
    {
        printf("Invalid year!");
    }
    else if(n<=2003)
    {
        if(n<=2000)
        {
            printf("Invalid year!\n");
        }
        else
        {
            printf("None\n");
        }
    }
    else
    {
        for(m=2003;m<=n;m++)
        {
            if((m%4==0&&m%100!=0)||m%400==0)
            {
                printf("%d\n",m);
            }
        }
    }
}