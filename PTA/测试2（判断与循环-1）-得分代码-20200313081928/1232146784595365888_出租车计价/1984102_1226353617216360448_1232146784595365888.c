#include<stdio.h>
int main()
{
    int t, M;
    double m;
    scanf("%lf %d", &m, &t);
    if(t<5){
        t=0;
    }else{
        t=t/5*2;
    }
    if(m<=3){
        m=10;
    }else{
        if(m>3,m<=10){
            m=10+(m-3)*2.0;
        }else{
            if(m>10){
                m=24+(m-10)*3.0;
            }
        }
    }
    M=m+0.5+t;
    printf("%d",M);
    return 0;
}