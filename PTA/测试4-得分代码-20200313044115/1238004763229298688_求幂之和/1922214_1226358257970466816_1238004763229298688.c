#include<stdio.h>
#include<math.h> 
int fact(int i);
main()
{
int i,j,k,sum=0;
scanf("%d",&i);
for(j=1;j<=i;j++){
k=pow(2,j);
sum+=k;
}
printf("result = %d",sum); 
}
int fact(int i)
{
int s;
s=pow(2,i);
return s;
}