#include<stdio.hh
double fact(int n);
{
int i;
for(i=n-1;i>0;i--)
{
    n=n*i;

}
return 0;
}
int main()
{
    int m,n,result;
    scanf("%d%d",&m,&n)
    result=fact(n)/(fact(m)*fact(n-m)m;
    printf("result=%d",rseult);
    return 0;



