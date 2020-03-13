#include<stdio.h>
int main()
{
double fact(int n);
int m,n;
double r;
scanf("%d %d",&m,&n);
r=fact(n)/(fact(m)*fact(n-m));
printf("result = %d\n",(int)(r));
    return 0;
}
double fact(int n)
{
    double r;
    if(n==0||n==1)
        r=1;
    else
        r=fact(n-1)*n;
    return(r);
}