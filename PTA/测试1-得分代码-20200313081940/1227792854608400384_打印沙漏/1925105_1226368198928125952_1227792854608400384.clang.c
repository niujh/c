#include<stdio.h>
int main()
{int sum,b,i,q,t,k,j,g,N;
char c;
sum=1;b=1; 
scanf("%d %c",&N,&c); 
for(i=1;sum<=N;i++)
{	b=b+2;//3+5+... 
sum=sum+b*2;}//当sum大于N时结束循环，所需要的sum应为sum-2*b 
i=i-1;
q=i;//保存沙漏的下半部分有多少行
sum=sum-2*b;//最大的沙漏所需要的字符数 
k=0; 
for(j=i;j>=1;j--)//后面没什么好说的，就是正常的分成上下两部分，然后找行数和每行空格、字符数的关系 
{ for(g=1;g<=k;g++)
printf(" ");
for(t=1;t<=2*j-1;t++)
printf("%c",c);
printf("\n");
k++;
}
k=k-2;
for(j=2;j<=q;j++)
{for(g=1;g<=k;g++)
printf(" ");
for(t=1;t<=2*j-1;t++)
printf("%c",c);
printf("\n");
k--;}
printf("%d",N-sum);
return 0;
}