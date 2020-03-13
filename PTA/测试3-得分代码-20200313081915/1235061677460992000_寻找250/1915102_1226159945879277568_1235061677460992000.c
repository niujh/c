#include<stdio.h>
int main(void)
{
    int num,i;
    for(i=1;i>0;i++){
        scanf("%d",&num);
        if(num==250){
            printf("%d",i);
            break;
        }
    }
    return 0;
}