#include<stdio.h>
double fact(int n);
int main()
{
    int i,k;
    double j=1;
    scanf("%d",&i);
    for(k=1;k<=i;k++){
        j+=fact(k);
    }
    printf("%.8lf",j);
    return 0;
}
double fact(int n)
{
    static double f=1;
    f=f*n;
    return (1.0/f);
}