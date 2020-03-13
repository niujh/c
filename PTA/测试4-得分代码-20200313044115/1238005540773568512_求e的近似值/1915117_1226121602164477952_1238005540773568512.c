#include<stdio.h>
double fact(int n);
int main()
{
    int m,i=0;
    double x=1;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
        x=x+1/fact(i);
    printf("%.8lf",x);
return 0;        
}
double fact(int n)
{
    int i;
    double h;
    h=1;
    for(i=1;i<=n;i++)
        h=h*i;
    return h;    
}