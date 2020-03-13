#include<stdio.h>
int main(void)
{
    double G;

    scanf("%lf",&G);
    if(G>=90){
        printf("A");
    }
    else if(G>=80){
        printf("B");
    }
    else if(G>=70){
        printf("C");
    }
    else if(G>=60){
        printf("D");
    }
    else{
        printf("E");
    }
    return 0;

}