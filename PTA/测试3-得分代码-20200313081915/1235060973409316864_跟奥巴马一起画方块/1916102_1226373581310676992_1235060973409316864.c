#include<stdio.h>
int main()
{
    int n,i,j;
    char a;
    scanf("%d ",&n);
    scanf("%c",&a);
    if(n%2==0)
    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=n;j++)
        {
             printf("%c",a);
        }
        printf("\n");     
    }
    if(n%2!=0)
    for(i=1;i<=(n+1)/2;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}