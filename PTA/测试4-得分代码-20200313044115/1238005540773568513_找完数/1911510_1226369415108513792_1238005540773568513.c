#include<stdio.h>
int pri(int n);
int su(int n);
int main()
{
    int m,n,s,f,i;
    s=0;
    scanf("%d %d",&m,&n);
    for (i=m;i<=n;i++)
    {
        if (su(i)==i)
        {
            s=s+1;
            printf("%d = 1",i);
            f=pri(i);
        }
    }
    if (s==0)
    {
        printf("None");
    }
}
int su(int n)
{
    int s=0;
    for (int i=1;i<n;i++)
    {
        if (n%i==0)
        {
            s=s+i;
        }
    }
    return s;
}
int pri(int n)
{
    int i;
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            printf(" + %d",i);
        }
    }
    printf("\n");
    return 2;
}