#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double n; 
    int m;
    double sum=0;
    cin>>n>>m;
    if(n>0){
        if(n<=3){
            sum+=10;
        }
        else if(n<=10){
            sum=10+2*(n-3);
        }
        else{
            sum=24+3*(n-10);
        }
    }
    if(m>=5){
        sum=sum+2*(m/5);
    }
    printf("%.0f",sum);
    return 0;
}