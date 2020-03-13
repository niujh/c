#include<stdio.h>
int main()
{
    int N,i;
    char c;
    scanf("%d %c",&N,&c);
    i=(N+1)/2;
    for(int j=0;j<i;j++)
    {
        for(int m=0;m<N;m++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}