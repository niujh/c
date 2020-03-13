#include <stdio.h>
#include <string.h>
int main ()
{
    char num [100];
    gets (num);
    int n = strlen (num);
    for (int i = n - 1;i >= 0;i--)
    {
        printf ("%c",num [i]);
    }
    return 0;
}