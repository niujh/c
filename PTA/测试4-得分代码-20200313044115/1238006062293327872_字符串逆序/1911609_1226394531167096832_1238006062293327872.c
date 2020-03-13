#include<stdio.h>
int main()
{
    int i,n = 0,j;
    char c,a[80],b[80];
    c = getchar();
    for(i = 0;c != '\n';i++)
    {
        a[i] = c;
        c = getchar();
        n++;
    }
    for(i = 0,j = n - 1;i < n;i++,j--)
    {
        b[j] = a[i];
    }
    for(i = 0;i < n;i++)
    {
        printf("%c",b[i]);
    }
}
