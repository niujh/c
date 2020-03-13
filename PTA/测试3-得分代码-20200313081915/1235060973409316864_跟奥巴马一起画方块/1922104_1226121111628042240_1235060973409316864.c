#include<stdio.h>
int main()
{
    int n, i, j;
    char c;
    scanf("%d %c", &n, &c);
    for(i=0; i<n/2+n%2; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}
