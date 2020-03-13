#include<stdio.h>
void main()
{
   int a,i,j; double b=1;double c=1;
      printf("请输入一个数\n");
         scanf("%d",&a);
            for(i=1;i<=a;i++)
               {
                   for(j=i;j>0;j--)
                   	{
                       		b=b/j; 
                               	}
                                           c=c+b;
                                                    b=1;
                                                       }
                                                           printf("%1.8f\n",c);
                                                           } 