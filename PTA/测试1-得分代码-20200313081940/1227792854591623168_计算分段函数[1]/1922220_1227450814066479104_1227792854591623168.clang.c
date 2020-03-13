#include<stdio.h>
int main(){
    float a,b;
    scanf("%f",&a);
    if(a==0){
    printf("f(0.0) = 0.0");}
    else{b=1/a;printf("f(%.1f) = %.1f",a,b);} 
    return 0;
    
} 
