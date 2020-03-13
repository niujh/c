#include<stdio.h>

int main(){
    int a,b;
    char c;
    double ans=0;
    scanf("%d %d %c",&a,&b,&c);
    if(b==90){
        ans=a*6.95;
    }else if(b==93){
       ans=a*7.44;
    }else{
       ans=a*7.93;
    }
    if(c=='m'){
        ans=ans*0.95;
    }else if(c=='e'){
        ans=ans*0.97;
    }
    printf("%.2f",ans);
    return 0;
}