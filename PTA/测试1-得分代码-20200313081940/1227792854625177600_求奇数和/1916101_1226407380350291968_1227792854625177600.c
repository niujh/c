#include<stdio.h>
int main(void)
{
    int a,sum=0;
    scanf("%d",&a);
    while (a>0)
    {
      if (a%2==1)
      {
          sum+=a;
      }
      scanf("%d",&a);
    }
    printf("%d\n",sum);
    return 0;
}