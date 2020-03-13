#include<stdio.h>
double fact(int a);
int main()
{
    int i,n;
    double sum=1.0;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+1/fact(i);
    }
    printf("%.8f",sum);
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