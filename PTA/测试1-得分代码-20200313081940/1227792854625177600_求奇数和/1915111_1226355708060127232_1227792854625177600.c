#include<stdio.h>
int main(){
    int a[100],i=0,sum=0;

    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]<=0)break;

    }
    int max=i+1;
    for(i=0;i<max;i++){
        if(a[i]%2==1)sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}