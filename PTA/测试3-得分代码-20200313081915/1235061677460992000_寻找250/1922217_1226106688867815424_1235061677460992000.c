#include <stdio.h>
int main()
{
    int a[20000], i=0, j;
    char c;
    do{
        scanf("%d", &a[i]);
        i++;
        c=getchar();
    }while(c!='\n');
    for(j=0; j<i; j++)
    {
        if(a[j]==250)
            break;
    }
    printf("%d", j+1);
}
