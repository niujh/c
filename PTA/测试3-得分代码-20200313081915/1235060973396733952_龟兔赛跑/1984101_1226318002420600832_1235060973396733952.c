int main()
{
    int a,b,T,r,e;
    scanf("%d",&T);
    r=T/90;
    e=T-r*90;
    if((e<=10)&&(e>0))
    {
        a=9*e+270*r;
        printf("^_^ %d",a);
    }
    else if((e>10)&&(e<30))
    {
        a=90+270*r;
        printf("^_^ %d",a);
    }
    else if(e==30)
    {
        a=90+270*r;
        printf("-_- %d",a);
    }
    else if((e>30)&&(e<45))
    {
        b=3*e+270*r;
        printf("@_@ %d",b);
    }
    else if(e==45)
    {
        a=135+270*r;
        printf("-_- %d",a);
    }
    else if((e>45)&&(e<=50))
    {
        a=135+270*r+9*(e-45);
        printf("^_^ %d",a);
    }
    else if((e>50)&&(e<60))
    {
        a=180+270*r;
        printf("^_^ %d",a);
    }
    else if(e==60)
    {
        a=180+270*r;
        printf("-_- %d",a);
    }
    else if((e>60)&&(e<90))
    {
        b=3*e+270*r;
        printf("@_@ %d",b);
    }
    else
    {
        a=270*r;
        printf("-_- %d",a);
    }
}