#include<stdio.h>
double fact(int n)
{
    int s;
    s=1;
    for (int i=1;i<=n;i++)
       s=s*i;
    return s;
}
int main()
{
    int m,n,x;
    scanf("%d %d",&m,&n);
    x=(int)fact(n)/(fact(m)*fact(n-m));
    printf("result = %d",x);
}