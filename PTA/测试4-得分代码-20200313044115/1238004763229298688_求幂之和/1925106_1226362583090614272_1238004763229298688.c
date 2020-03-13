#include<stdio.h>
int main()
{
    int x,sum=0,n=0,a;
    scanf("%d",&x);
    a=1;
    while(n<x){
        a=2*a;
        n++;
        sum+=a;
    }
    printf("result = %d",sum);
    return 0;

}