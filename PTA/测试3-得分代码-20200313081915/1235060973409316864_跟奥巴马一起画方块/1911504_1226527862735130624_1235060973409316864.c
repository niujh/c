#include<stdio.h>
int main()
{
    int i,j,k,d;
    char c;
    scanf("%d %c",&d,&c);
    for(i=0;i<(d+1)/2;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("%c",c);
        }
    printf("\n");

    }
    return 0;
}