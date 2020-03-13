#include<stdio.h>
int main()
{
    double s,a=0.0;
    int t,b,c,d=0;
    scanf("%1f %d",&s,&t);
    if (s<=3.0)
    {
        a=10.0;
    }
    else
    {
        if (s<=10.0)
        {
            a=10.0+2.0*(s-3);
        }
        else
        {
            a=24.0+3.0*(s-10.);
        }
    }
    b=(int)a;
    if (a-b>=0.5)
    {
        b+=1;
    }
    c=t/5*2;
    d=b+c;
    printf ("%d",d);
    return 0;
}