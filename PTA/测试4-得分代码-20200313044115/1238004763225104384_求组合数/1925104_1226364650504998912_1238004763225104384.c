#include<stdio.h>
int fact(int t);
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("result = %d",fact(n)/(fact(m)*fact(n-m)));
    return 0;
                    

}
int fact (int t)

{
    int i, a=1;
    for(i=1;i<=t;i++)
    {
        a=a*i;
    }
        return a;
    
}