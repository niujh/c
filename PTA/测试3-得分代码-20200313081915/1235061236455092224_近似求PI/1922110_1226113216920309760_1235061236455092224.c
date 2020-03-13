#include <stdio.h>

int main(){
    double i,eps,k=1,s=1;
    scanf("%le",&eps);
    for(i=1;k>=eps;i++)
    {k*=i/(i*2+1);s+=k;}
    printf("PI = %.5f",s*2);
return 0;
}