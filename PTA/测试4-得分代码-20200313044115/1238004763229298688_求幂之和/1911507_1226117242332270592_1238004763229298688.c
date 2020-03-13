#include<stdio.h>
#include<math.h>
int main()
{
    int b,i,sum;
    scanf("%d",&b);
    sum=0;
    for(i=1;i<=b;i++)
        sum=sum+pow(2,i);
    printf("result = %d",sum);
   return 0;
}