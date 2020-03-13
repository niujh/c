#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&i);
    for(a=1;a<=i;a++)
    {
        sum=sum+pow(2,a);
    }
    printf("result = %d",sum);
}