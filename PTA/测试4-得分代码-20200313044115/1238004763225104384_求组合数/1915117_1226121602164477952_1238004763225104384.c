# include<stdio.h>
double fact(int n);
int main()
{
   double result;
   int m,n;
   scanf("%d %d",&m,&n);
   result=fact(n)/(fact(m)*fact(n-m));
   printf("result = %1.f",result);
return 0;   
}
double fact(int n)
{
    int i;
    double x;
    x=1;
    for(i=1;i<=n;i++)
        x=x*i;
    return x;    
}