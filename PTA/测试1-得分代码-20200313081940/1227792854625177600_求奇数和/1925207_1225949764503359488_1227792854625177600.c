#include<stdio.h>
int main()
{
    int sum,a;
    while(1)
    {
        scanf("%d",&a);
        if(a<=0)break;
        else if(a%2==0)continue;
        else{
            sum=sum+a;
        }
    }
    printf("%d",sum);
    return 0;
    
}
