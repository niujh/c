#include<string.h>
#include<stdio.h>
int main()
{
char a[100];
int i,n,j=0,temp;
gets(a);
n=strlen(a);
for(i=0;i<n/2;i++){
temp=a[i];
a[i]=a[n-1-i];
a[n-1-i]=temp;}
a[n]='\0';
puts(a);
return 0;
}