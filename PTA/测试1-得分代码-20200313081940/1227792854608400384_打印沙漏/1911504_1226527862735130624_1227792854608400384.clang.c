#include<stdio.h>
int main()
{
int n,sum=1,hang=1,h=1;
char c;
scanf("%d %c",&n,&c);
while(sum<=n)
{
hang+=2;
sum+=hang*2;
}
sum-=hang*2;
hang-=2;
h=hang;
for(int i=0;i<h/2;i++){
for(int j=0;j<i;j++) putchar(' ');
for(int j=0;j<hang;j++) putchar(c);
putchar('\n');
hang-=2;
}
for(int i=0;i<h/2+1;i++){
for(int j=0;j<h/2-hang/2;j++) putchar(' ');
for(int j=0;j<hang;j++) putchar(c);
putchar('\n');
hang+=2;
}
printf("%d",n-sum);
}
