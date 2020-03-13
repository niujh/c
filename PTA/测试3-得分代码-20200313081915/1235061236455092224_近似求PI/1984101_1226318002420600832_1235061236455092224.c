int main()
{    
    double i,a=1,b=1,s=1;
    for(i=1;i<=100;i++)
    {
        a=a*i;
        b=b*(2*i+1);
        s=s+a/b;
    }
    printf("PI = %.5lf",s*2);
}