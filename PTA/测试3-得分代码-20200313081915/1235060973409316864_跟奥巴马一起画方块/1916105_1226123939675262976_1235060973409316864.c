#include<stdio.h>

int main()
{
int n,i,j;
char c;
scanf("%d %c",&n,&c);
for(i=1;i<=(n/2);i++)
{
    for(j=1;j<=n;j++)
        printf("%c",c);
    printf("\n");
}
if(n%2!=0)
{
   for(j=1;j<=n;j++)
        printf("%c",c);
    printf("\n"); 
}
    return 0;
}