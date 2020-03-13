#include<stdio.h>
double fact(int n);
double fact(int n)
{
    double t=1;
    for(int i=2;i<=n;i++){
        t*=i;
    }
    return t;
}
int main()
{
    int n;
    double a=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a=a+1/fact(i);
    }
printf("%.8lf",a);
return 0;
}
