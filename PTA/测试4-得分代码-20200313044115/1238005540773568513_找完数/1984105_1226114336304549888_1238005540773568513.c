#include<stdio.h>
const int p=10000;
int main()
{
    int m,n,num=0,a[p],flag=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        num=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                a[num]=j;
                num++;
            }
        }
        int sum=0;
        for(int k=0;k<num;k++)
        {
            sum+=a[k];
        }
        if(sum==i)
        {
            flag=1;
            printf("%d = %d",i,a[0]);
            for(int q=1;q<num;q++)
            {
                printf(" + %d",a[q]);
            }
            printf("\n");
        }
    }
    if(flag==0)
    {
        printf("None");
    }
    return 0;
}