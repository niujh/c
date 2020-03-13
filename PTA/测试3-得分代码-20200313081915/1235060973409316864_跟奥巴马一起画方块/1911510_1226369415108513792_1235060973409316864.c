#include<stdio.h>
int main(void)
{
    char c;
    int a,i,m,n;
    scanf("%d %c",&a,&c);
    for (i=0;i<(a+1)/2;i++)
    {
        for (m=0;m<a;m++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}