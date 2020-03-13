#include<stdio.h>

int main(void)
{
int N, i, sum; 
char ch;
scanf("%d %c", &N, &ch);
i=sum=1;
while(sum<=N)
{
sum+=2*(2*(i+1)-1);
if(sum<=N)
i++;
}
int j,m;
for(j=0;j<i;j++)
{
for(m=0;m<j;m++)
printf(" ");
for(m=0;m<2*(i-j)-1;m++)
{
printf("%c", ch);
}
printf("\n");
}
for(j=2;j<=i;j++)
{
for(m=0;m<i-j;m++)
printf(" ");
for(m=0;m<2*j-1;m++)
{
printf("%c", ch);
}
printf("\n");
}
printf("%d", N-(sum-2*(2*(i+1)-1)));
return 0;
}