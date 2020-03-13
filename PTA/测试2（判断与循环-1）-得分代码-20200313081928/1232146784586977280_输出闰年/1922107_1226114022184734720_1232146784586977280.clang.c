#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(2000<a&&a<2100){
        int b=2001;
        for(;b<=a;b++){
            if(b%4==0&&b%100!=0)
            printf("b");
            else
            printf("None");
            return 0;
        }
    }
    else
    printf("Invalid year!");
    return 0;
}