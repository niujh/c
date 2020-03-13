#include<stdio.h>
int main()
{
    int n1,sum,i=3,n=1,a,j,k,m;
	char str;
    scanf("%d %c",&sum,&str);
    while (sum>=n)
	{n=n+i*2;
     i=i+2;}
	i=i-2;
    n1=n-i*2;
    a=sum-n1;
    m=(i+1)/2-1;
    for(k=0;k<=m-1;k++)
    {
        for(j=0;j<k;j++)
        {printf(" ");}
        for(j=0;j<(m-k)*2-1;j++)
        {printf("%c",str);}
        printf("\n");
    }
    for(k=0;k<=m-2;k++)
    {
        for(j=0;j<(m-k)-2;j++)
        {printf(" ");}
        for(j=0;j<2*k+3;j++)
        {printf("%c",str);}
        printf("\n");
    }
    printf("%d",a);
}