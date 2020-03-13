#include<stdio.h>
int main()
{
    int n=1,a;
    while(1){
        scanf("%d",&a);
        if(a==250) break;
        n++;
    }
    printf("%d",n);
    return 0;
}