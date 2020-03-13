#include<iostream.h>
int main()
{
int a,n;
for(n=1;n<=1000;n++)
{
int x=0;
for(a=1;a<n;a++)
{
if(n%a==0)x+=a;
}
if(n==x)cout<<n<<"\n";
}
}