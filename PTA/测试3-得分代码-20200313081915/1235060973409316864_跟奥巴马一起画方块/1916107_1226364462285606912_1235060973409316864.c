#include<stdio.h>
int main()
{
    int a,t;
    char c;
    int i,j;
    scanf("%d %c",&a,&c);
    t=a/2+a%2;
    for(i=1;i<=t;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}


