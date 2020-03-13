#include<stdio.h>
int f(int n)
{
    if(n%2==0)return 0;
    else return 1;
}
int main()
{int n;
 int s=0;
 while(scanf("%d",&n)&&(n!=0&&n>0))
 {int t=f(n);
  if(t==1) s+=n;
  }

 
 printf("%d\n",s);
 return 0;

}