#include<stdio.h>
#include<math.h>
int main()
{
int a[1000],b,c,d,e,m,n,i,j,k;
scanf("%d%d",&m,&n);
e=0;
for(i = m;i <= n;i++)
{
b=0;
c=1;
for(j = 1;j < i;j++)
{
d = i % j;
if (d == 0)
{
b += j;
a[c]=j;
c++;
}
}
if (b == i)
{
if(e>0) printf("\n");
for(k=1;k<=c-1;k++)
{
if(k==1) printf("%d = 1",i);
else printf(" + %d",a[k]);
}
e++;
}
}
if(e==0) printf("None");
return 0;
}