#include<stdio.h>
int main
{
    int n,i;
    scanf("%d",&n);
    for(i=2000,i<=n,i++){
        if{(i%4==0&&i%100!=0)||(i%400==0)}printf("%d\n",i);
        else continue;

    }
    return 0;
}