#include <stdio.h>
#include<math.h>
int main (){
int N,i,n=1;
double f,sum=1.0;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    n=n*i;
    f=1.0/n;
    sum=sum+f;
}
 printf("%.8f",sum);
 return 0;
 }
