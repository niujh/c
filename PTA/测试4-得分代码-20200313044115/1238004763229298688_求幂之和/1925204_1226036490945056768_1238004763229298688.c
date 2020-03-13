#include<stdio.h>
#include<math.h>
int main()
{
 int a,i;
 int b=2;
 int s=0;
  scanf("%d",&a);
   for(i=1;i<=a;i++){
    b=pow(2,i);
     s=s+b;
      }
       printf("result = %ld",s);

       return 0;
       }