#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum = 0;
    scanf("%d",&n);
    for(;n >= 1;n--)
    {
        sum = pow(2,n) + sum;
    }
    printf("result = %d",sum);
}
