#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=pow(2,i);
    }
    printf("result = %d\n",s);
    return 0;
}