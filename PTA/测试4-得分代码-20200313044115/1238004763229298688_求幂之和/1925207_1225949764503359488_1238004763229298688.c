#include<stdio.h>
#include<math.h>
int fact(int n);
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=pow(2,i);
    }
    printf("result = %d",sum);
    return 0;
}
int fact(int n){
    int m;
    m=pow(2,n);
    return m;
}