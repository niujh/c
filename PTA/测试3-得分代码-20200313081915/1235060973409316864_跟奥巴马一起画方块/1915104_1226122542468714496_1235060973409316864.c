#include <stdio.h>
int main()
{
    int a,b,c;
    char d;
    scanf("%d %c",&c,&d);
    for(a=0;a<c/2.0;a++)
    {
        for(b=0;b<c;b++)
        {
            printf("%c",d);
        }
    printf("\n");
    }
    return 0;
}
