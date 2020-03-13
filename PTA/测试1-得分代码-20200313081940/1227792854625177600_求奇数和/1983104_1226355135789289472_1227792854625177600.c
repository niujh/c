#include<stdio.h>
int main()
{
    int ri,repeat;
    int x,sum;
    scanf("%d",&repeat);
    for(ri=1;ri<=repeat;ri++){
        scanf("%d",&x);
        sum=0;
        while(x!=-1&&x!=0)
        {
            sum+=x%2&x:0;
            scanf("%d",&x);
        }
        printf("%d\n",sum);
    }
}
        