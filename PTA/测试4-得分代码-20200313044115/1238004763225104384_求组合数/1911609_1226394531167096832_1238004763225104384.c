#include<stdio.h>

double fact(int n){
    if(n==0){
        return 1;
    }
    double ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int main(){
    int m,n;
    double result;
    scanf("%d %d",&m,&n);
    result=fact(n)/(fact(m)*fact(n-m))*1.0;//既然result是double的，干脆把所有和result有关
    printf("result = %.0f",result);//的类型都设为double
    return 0;
}