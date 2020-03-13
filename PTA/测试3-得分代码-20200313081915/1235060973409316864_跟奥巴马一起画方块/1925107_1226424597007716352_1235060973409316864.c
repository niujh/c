#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j;
    char c;
    scanf("%d %c",&a,&c);
    for(i=0;i<(a+1)/2;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
