#include <stdio.h>
int main()
{
    int a,i,j;
    char c;
    scanf("%d %c",&a,&c);
    for (i=0;i<(int)(a/2.0+0.5);i++)
    {
        for(j=0;j<a;j++)
        {
                printf("%c",c);
            }
        
        printf("\n");
    }
    return 0;
}
