#include <stdio.h>
int main()
{
    float a;
    int b,temp;
    scanf("%f %d",&a,&b);
    if(a<=3){
        temp=10;
    }
    else if(a>3&&a<=10){
        temp=(int)(10+(a-3)*2+0.5);
    }
    else{
        temp=(int)(24+(a-10)*3+0.5);
    }
    printf("%d",temp+b/5*2);
    return 0;
}