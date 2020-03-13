#include<stdio.h>
double fact(int a);
int main()
{
    int m,n;
    double result;
    scanf("%d%d",&m,&n);
    result=fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0f",result);
    return 0;
}

double fact(int a)
{
    double i,A=1.0;
    for(i=1;i<=a;i++){
        A=A*i;
    }
    return A;
}