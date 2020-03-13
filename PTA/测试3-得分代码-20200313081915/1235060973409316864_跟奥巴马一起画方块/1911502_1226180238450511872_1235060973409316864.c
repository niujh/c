#include<stdio.h>
int main()
{
    char c;
    int N,line=0;
    scanf("%d %c",&N,&c);
    line=N/2;
    if(N-line*2==1)
    {
        line++;
    }
    for (int i=1;i<=line;i++)
    {
        for(int j=1;j<=N;j++)
        {
            printf("%c\0",c);
        }
        printf("\n");
    }
    return 0;
}