
#include<stdio.h>
int main()
{
    int m,n;
    int a[10000];
    int isnone=1;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
	    if(m<=0)m=1;
		if(m>n) goto a;
        int i,j,k,t,sum;
        for(i=m;i<=n;i++)
        {
            k=0;
            sum=0;
            for(j=1;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    a[k]=j;
                    sum=sum+a[k];
                    k++;
                }
            }
            if(sum==i){
            	isnone = 0;
                printf("%d = ",i);
                for(t=0;t<k;t++)
                {
                    if(t!=k-1)
                        printf("%d + ",a[t]);
                    else
                        printf("%d\n",a[t]);
                }
            }
        }
        if(isnone==1)a:printf("None\n");
    }

    return 0;
}
