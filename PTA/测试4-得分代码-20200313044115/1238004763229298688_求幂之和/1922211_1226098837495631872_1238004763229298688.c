#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,result=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        m=pow(2,i);
        result+=m;
    }
    printf("result = %d",result);
return 0;
}