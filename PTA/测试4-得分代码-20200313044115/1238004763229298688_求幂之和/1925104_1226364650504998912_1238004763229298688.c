#include<stdio.h>
int fact(int n);
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("result = %d",fact(n));
    return 0;
}
int fact(int n)
{
    int d=0;
    for(int i=1;i<= n;i++)
    {
        d+=pow(2,i);

    }
    return d;
}
