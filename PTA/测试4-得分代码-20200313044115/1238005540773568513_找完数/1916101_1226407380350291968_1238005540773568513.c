#include<stdio.h>
int p(int n)
{
    int i,j=1;
    printf("%d = ",n);
    printf("%d",j);
    for (i=2;i<n;i++)
    {
      if (n%i==0)
      {
         printf(" + %d",i);
      }
    }
}
int p2(int n)
{
    int i,j=1;
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            j+=i;
        }
    }
    if (j==n) return 1;
    else return 0;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    for (int i=m;i<=n;i++)
       if (p2(i)==1) 
       {
           p(i);
           printf("\n");
       }
}