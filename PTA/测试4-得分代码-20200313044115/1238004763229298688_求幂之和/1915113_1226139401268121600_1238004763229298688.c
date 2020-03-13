#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0;
    int n,a;
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
    {
        a=pow(2,i);
        sum=+sum;
    }
    printf("%d\n", sum);
                                                
    return 0;
    }