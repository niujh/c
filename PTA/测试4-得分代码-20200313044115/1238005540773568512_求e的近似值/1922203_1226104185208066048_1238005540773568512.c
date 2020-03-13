#include<stdio.h>
int main()
{
    int x ,i;
    double sum ,a;
    sum = a = 1.0;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        a*=i;
        sum+=1/a;

    }
    printf("%.8f",sum);
    return 0;
}