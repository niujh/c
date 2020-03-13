#include<stdio.h>
double fact(int n);
int main()
{
int m,n,result;
scanf("%d %d",&m,&n);
result=fact(n)/(fact(m)*fact(n-m));
printf("result = %d",result);
return 0;
}
double fact(int n)
{int q;
for(q=n-1;q>=1;q--)
{n*=q;
}
return (n);
}