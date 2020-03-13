#include<stdio.h>
void main()
{ 
    int a,b;
        scanf("%d %d",&a,&b);
         for(int n=a;n<b;n++)
          {
            int sum=0;
              for(int num=1;num<n;num++)
                {
                   if(n%num==0)
                       sum+=num;
                         }
                           if(sum==n)
                              printf("%d\n",n);
                               }
                               }