#include<stdio.h>
int main(viod)
{
    int x;
    float result;
    scanf("%d",&x);
    if (x==0){
        result=(float)0;
    }
    else{
        result=1/(float)x;
    }
    printf("f(%.1f)=%.1f",(float)x,result);
    return 0;
}