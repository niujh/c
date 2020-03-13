#include<stdio.h>
#include<math.h>
int main(){
    int de,flag;
    double item,pi,eps;
    flag=1;
    de=1;
    item=1.0;
    pi=0;
    scanf("%le",&eps);
    while(fabs(item)>=eps){
        item=flag*1.0/de;
        pi=pi+item;
        flag=-flag;
        de=de+2;
    }
    pi=pi*4;
    printf("PI = %.5lf\n",pi);
    return 0;
}