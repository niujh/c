#include<stdio.h>
#include<math.h>
int main()
{
    double n,s,sum;
    scanf("%lf",&n);
    for(s=1,sum=0;s<=n;s++){
        sum=sum+pow(2,s);
        }
        printf("result = %.0f",sum);
        return 0;
}