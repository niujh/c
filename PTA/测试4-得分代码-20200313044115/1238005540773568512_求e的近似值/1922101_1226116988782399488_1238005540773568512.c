#include<stdio.h>
double fac(double a){
    int i;
    double ret=1;
    for(i=1;i<=a;i++){
        ret*=i;
    }
    return ret;
}
int main(){
    int i,n;
    double sum=1,a=1;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        sum+=1/fac(a);
    }
    printf("%.8f",sum);
    return 0;
}