#include<stdio.h>
int main()
{
    double i,j,n,k;
    char c;
    scanf("%lf %c",&n,&c);
    k=n/2;
    for (i=0;i<k;i++)
    {
      for (j=0;j<n;j++)
      {
        printf("%c",c);
      }
      printf("\n");
    }
    return 0;
}