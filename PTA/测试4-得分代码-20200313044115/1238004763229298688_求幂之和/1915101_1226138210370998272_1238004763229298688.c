#include<stdio.h>
int main(void)
{
int n,i,temp=2,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
sum=sum+temp;
temp=temp*2;
}
printf("result = %d",sum);
return 0;
}