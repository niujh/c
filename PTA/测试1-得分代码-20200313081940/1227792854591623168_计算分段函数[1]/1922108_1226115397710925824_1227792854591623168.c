#include<stdio.h>
float main()
{
    float y;
    float x;
    scanf("%f",&x);
    if(x!=0.0){
        y=1/x;
        printf("f(%.1f) = %.1f",x,y);
    }else{
        y=0;
        printf("f(%.1f) = %.1f",x,y);
    }
    return 0;
}