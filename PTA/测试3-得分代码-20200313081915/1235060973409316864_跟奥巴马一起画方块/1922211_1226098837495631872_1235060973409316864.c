#include<stdio.h>
int main()
{
    int a;
    char b;
    scanf("%d %c",&a,&b);
    for(int u=1;u<=(a+1)/2;u++)
    {
        for(int i=1;i<=a;i++)
        {
            printf("%c",b);
        }
    printf("\n");
    
    }
    return 0;
}