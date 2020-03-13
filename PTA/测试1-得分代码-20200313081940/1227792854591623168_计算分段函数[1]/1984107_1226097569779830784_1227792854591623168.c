#include <stdio.h>
main()
{
    float x;
    while(1){
        scanf("%f",&x);
        if(x==0.0)
            printf("f(%.1f)",x);
        else
            printf("f(%.1f)=%.1f\n",x,1.0/x);
    }
}