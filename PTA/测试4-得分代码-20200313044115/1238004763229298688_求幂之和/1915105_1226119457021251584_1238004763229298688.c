#include<stdio.h>
#include<math.h>
int main(){
    int i=0,n=0;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+pow(2,i);
    }
    printf("result = %.0lf",sum);
}