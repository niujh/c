#include<stdio.h>
void fun(int h,int n,char ch)
{
    int i,j;//迭代器
        for(i=2*h-1;i>0;i--)printf(" ");
            for(j=2*(n-h+1)-1;j>0;j--)printf("%c",ch);
                for(i=2*h-1;i>0;i--)printf(" ");
                    printf("\n");
                        printf("666\n");
                        }
                        int main()
                        {
                            int sum;
                                char ch;
                                    scanf("%d %c",&sum,&ch);
                                        int h=1,m=0,n=0;//n用来存储计算后的上半行数，m用来存储余数
                                            for(h=1;h<50;h++){
                                                    if(sum<(2*h*h-1)){
                                                               n=h-1;
                                                                          m=sum-(2*n*n-1);
                                                                                     break;
                                                                                             }
                                                                                                 }
                                                                                                     //确定了行数和余数之后，打印，使用函数fun
                                                                                                         for(h=1;h==n;h++) fun(h,n,ch);
                                                                                                             for(h=n;h==0;h--) fun(h,n,ch);
                                                                                                                 int j=m;
                                                                                                                     for(j=m;j>0;j--)printf("%c",ch);
                                                                                                                         return 0;
                                                                                                                         }