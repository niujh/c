#include<stdio.h>
int main()
{
    int x=0,t;
    t=0;
    while(t==0){
        t=1;
        if((x%5)!=1) t=0;
        if((x%6)!=5) t=0;
        if((x%7)!=4) t=0;
        if((x%11)!=10) t=0;
        x+=1;
    }
    printf("%d",x-1);
return 0;
}