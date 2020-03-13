#include<stdio.h>
#include<math.h> 
int fact(int n);
main()
{
int n,m,i,sum=0;
scanf("%d",&n);
for(m=1;m<=n;m++){
i=pow(2,m);
sum+=i;
}
printf("result = %d",sum); 
}
int fact(int n)
{
int s;
s=pow(2,n);
return s;
}