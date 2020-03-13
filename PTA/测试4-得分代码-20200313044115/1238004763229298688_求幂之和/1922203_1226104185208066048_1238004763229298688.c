#include<stdio.h>
#include<math.h>
int main()
{
    int i,x;
    int sum=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        
        sum=sum+pow(2,i);
    }printf("result = %d",sum);
    


}