#include<stdio.h>
//double fact(int n);
int main()
{
    int i,n;
    double e,a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   a*=i;
        e=e+1.0/a;
    }
    e=e+1;
    printf("%.8f",e);
    return 0;
}
//double fact(int n)
//{
 //   int i;
   // double jc=1;
    //for(i=1;i<=n;i++)
    //{
      //  jc*=i;
    //}
    //return jc;
//}