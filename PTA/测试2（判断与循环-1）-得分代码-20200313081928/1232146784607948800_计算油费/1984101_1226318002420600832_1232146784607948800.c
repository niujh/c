int main()
{
    int b;
    char c;
    float a,sum=0,q;
    scanf("%f %d %c",&a,&b,&c);
    if(b==90)
    {
        sum=a*6.95;
    }
    else if(b==93)
    {
        sum=a*7.44;
    }
    else if(b==97)
    {
        sum=a*7.93;
    }
    switch(c)
    {
        case'm':q=0.95;break;
        case'e':q=0.97;break;
    }
    sum=sum*q;
    printf("%0.2f",sum);
}