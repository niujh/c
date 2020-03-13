#include <stdio.h>
int main(void)
{
    int a[1000], i = 0;
    int max = 0;
    do{
        scanf("%d", &a[i]);
         if(a[i]%2==1)
            max+=a[i];
        i++;
    }while(a[i-1]>0);
    printf("%d", max);
}
