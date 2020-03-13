#include<stdio.h>
int main()
{
    int m,n;
    char a;
    double x,y;
    scanf("%d %d %c",&m,&n,&a);
    if(n==93)
    {
        x=7.44;
    }
    else if(n==90)
    {
        x=6.95;
    }
    else if(n==97)
    {
        x=7.93;
    }
    if(a=='e')
    {
        y=m*x*0.97;
    }
    if(a=='m')
    {
        y=m*x*0.95;
    }
    printf("%.2f",y);
    return 0;

}