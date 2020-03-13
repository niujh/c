# include<stdio.h>
# include<math.h>
int main()
{
    int n,result,i,m;
    result=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        result=pow(2,i)+result;
    printf("result = %d",result);
    return 0;
}