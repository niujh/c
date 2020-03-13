#include<stdio.h>
int main()
{
 int n;
 char c;
 scanf("%d",&n);
 scanf(" %c",&c);
 int i;
 for(i=1;2*i*i-1<=n;i++);
 i--;
 int left=n-2*i*i+1;
 int k,l,j;
 for(j=0;j<i;j++)
 {
  for(l=0;l<j;l++)
  printf(" ");
  for(k=0;k<2*(i-l)-1;k++)
  printf("%c",c);
  printf("\n");
}
for(j=0;j<i-1;j++)
{
 for(l=0;l<i-2-j;l++)
 printf(" ");
 for(k=0;k<2*j+3;k++)
 printf("%c",c);
 printf("\n");
}
printf("%d",left);
return 0;
}