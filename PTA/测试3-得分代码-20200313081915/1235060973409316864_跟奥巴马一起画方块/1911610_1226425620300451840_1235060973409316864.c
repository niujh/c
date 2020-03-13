#include<stdio.h>
int main()
{
    int n;
    int i=1,j=1;
    char c;
    scanf("%d %c",&n,&c);
    for (i=1;i<=(n+1)/2;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}