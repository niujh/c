#include<stdio.h>
int main()
{
    double r1,r2,s;
    int a,b;
    char c;
    s=0;
    scanf("%d %d %c",&a,&b,&c);
    switch(b)
    {
        case 90 : r1=6.95; break;
        case 93 : r1=7.44; break;
        case 97 : r1=7.93; break;
    }
    switch(c)
    {
        case 'm' : r2=0.95; break;
        case 'e' : r2=0.97; break;
    }
    s=r1*r2*a;
    printf("%.2lf",s);
    return 0;
}