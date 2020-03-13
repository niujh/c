#include<stdio.h>
int main()
{
    int N=0;
    char c;
    scanf("%d %c",&N,&c);
    for(int i=1;i<=(N+1)/2;i++)
    {
        for(int j=1;j<=N;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}