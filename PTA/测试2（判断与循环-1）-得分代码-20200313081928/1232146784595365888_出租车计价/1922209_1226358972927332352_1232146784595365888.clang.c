int main()
{
    int d=1,gm=1,dm=1;
    float n=1.0;
    scanf("%f %d",&n,&d);
    if(n<=3.0)
    {
        gm=10;
    }
    else if(n>=3.0 && n<=10.0)
    {
    gm=10+(n-3)*2;
    }
else
{
gm=10+2*7+3*(n-10);
}
 if(d<5)
 {
     dm=0;
 }
 else
 {
     dm=d*0.4;
 }
 printf("%d",gm+dm);
 return 0;
}
