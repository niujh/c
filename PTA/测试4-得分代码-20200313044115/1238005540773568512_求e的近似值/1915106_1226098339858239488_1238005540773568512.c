#include<stdio.h>

double fact(int n);

int main()
{
    int n;
    double result;
    scanf("%d",&n);
    result=1;
    int i=1;
    for(i=1;i<=n;i++){
        result=result+1/fact(i);
    }
    printf("%.8lf",result);

    return 0;
}

double fact(int n){
    double result;

    if(n==0||n==1) result=1;
    else result=n*fact(n-1);

    return result;
}