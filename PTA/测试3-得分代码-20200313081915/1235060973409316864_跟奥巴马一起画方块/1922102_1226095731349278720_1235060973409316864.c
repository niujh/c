#include<stdio.h>
int main()
{
    int n,i=0,l=0;
    char c;
    scanf("%d %c",&n,&c);
    while(l<(n/2))
    {
        printf("%c",c);
        i++;
        if(i%10==0)
        {
            printf("\n");
            l+=1;
        }
    }
    return 0;
}