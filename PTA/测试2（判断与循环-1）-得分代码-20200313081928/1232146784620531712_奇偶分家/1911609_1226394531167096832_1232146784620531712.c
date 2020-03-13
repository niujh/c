#include<stdio.h>
int main()
{
    int n,i,m,a = 0,b = 0;
    scanf("%d",&n);
    for(i = 0;i <n;i++)
    {
        scanf("%d",&m);
        if(m % 2 == 0)a++;
        else b++;
    }
    printf("%d %d",b,a);
}
