#include<stdio.h>
#include<math.h>
int main()
{
  printf("请输入一个正整数和一个符号:");
  int a;
  char b;
  scanf("%d %c",&a,&b);
  if(a>1000) return 0;
  if(a<1) return 0;
  int i=1;
  int c=1; 
  int d=1;
  if(a<3)
    printf("%c\n%d",b,a-1);
    
  else
 while(a>c)
   {  
     i=i+2;
     d=c;
     c=c+2*i;
    }
 i=i-2;
 int m=i;
 int j=0;

 while(i>=1)
 {
  for(int k=1;k<=j;k++){
  printf(" ");
 }
for(int n=1;n<=i;n++){
printf("%c",b);
}
printf("\n");
i=i-2;
j=j+1;
 }
 
  
 j=j-2;
 i=i+4;
 while(j>=0){
  
  for(int t=1;t<=j;t++){
  printf(" ");
 }
for(int h=1;h<=i;h++){
printf("%c",b);
}
printf("\n");
j=j-1;
i=i+2;
  
 }
 printf("\n %d",a-d);
 
}
————————————————
版权声明：本文为CSDN博主「suguoxiongblog」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/suguoxiongblog/article/details/54970441