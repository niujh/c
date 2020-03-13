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
    int m,n;
    scanf("%d %d",&m,&n);
    double result;
    result=fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0lf",result);
    return 0;


}