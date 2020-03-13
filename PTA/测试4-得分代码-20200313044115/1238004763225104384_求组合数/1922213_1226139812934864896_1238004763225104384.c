#include <stdio.h>
int main()
{
double fact(int n)
{
    int i
    for(i=n-1;i>0;i--)
    n=n*i
    return 0;
}
int result,m,n:
scanf("%d %d",&m,&n);
result=fact(n)/fact(m)*fact(n-m);
printf("result=%d\n",result);
return 0;
}
