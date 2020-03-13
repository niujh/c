#include<stdio.h>
int main()
{
    int n,m,t,s,sum;
    sum=0;
    scanf("%d %d",&n,&m);
    for (t=n+1;n<t && t<m;t++){
        for(s=1;s<t;s++){
            if (t%s==0){
                sum=sum+s;
            }
        }
        if(sum==t){
            printf("%d = 1",t);
            for(s=2;s<t;s++){
                if (t%s==0){
                    printf(" + %d",s);
                }
            }
            printf("\n");
            }
        sum=0;
    }
    return 0;
}