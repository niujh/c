#include<stdio.h>
int f(int n)
{
    int s;
    s=1;
    for (int i=1;i<=n;i++)
       s=s*2;
    return s;
}
int main()
{
    int result,n,i;
    scanf("%d",&n);
    result=0;
    for (i=1;i<=n;i++)
      result=result+f(i);
    printf("result = %d",result);
}