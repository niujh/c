#include<stdio.h>
double Jiecheng(int x);
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    double result = Jiecheng(n)/(Jiecheng(m)*Jiecheng(n-m));
    printf("result = %1.lf",result);
    return 0;
    

}
double Jiecheng(int x)
{
    double zuhe=1;
    if(x==0)
    return 1;
    for(int i=2;i<=x;i++)
    zuhe*=i;
    return zuhe;

}