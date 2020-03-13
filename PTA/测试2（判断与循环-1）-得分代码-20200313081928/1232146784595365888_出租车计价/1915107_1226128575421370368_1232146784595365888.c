int main()
{
    float a;
    int b,cost;
    scanf("%f %d",&a,&b);
    if (a<=3)
    {
        cost=10;
    }
    else if(a>3&&a<=10)
    {
        cost=(int)(10+(a-3)*2+0.5);
    }
    else{
        cost=(int)(24+(a-10)*3+0.5);
    }
    printf("%d",cost+b/5*2);
    return 0;
}