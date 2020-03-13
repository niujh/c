#include<stdio.h>
int main()
{  int n,i; double b=1,sum=0;
     scanf("%d",&n);
      for(i=1;i<=n;i++)
        {  b=b*i;
          sum=sum+1.0/b;
  }
 printf("%.8lf",sum+1);
 return 0;
}
