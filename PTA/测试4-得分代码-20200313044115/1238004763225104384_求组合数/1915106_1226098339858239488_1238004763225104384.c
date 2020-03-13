#include<stdio.h>

double fact(int n);

int main()
{
    int m,n;
    double result;
    scanf("%d%d",&m,&n);
    result=1;
    result=fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0f",result);

    return 0;
}

double fact(int n){
    double result;

    if(n==0||n==1) result=1;
    else result=n*fact(n-1);

    return result;
}