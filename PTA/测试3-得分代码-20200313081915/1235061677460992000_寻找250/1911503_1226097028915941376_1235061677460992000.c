#include <stdio.h>
int main()
{
    int a,i=0;
    while(1){
        scanf("%d",&a);
        if(a==250)
        break;
        i++;
    }
    printf("%d",i+1);
    return 0;
}