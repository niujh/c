#include<stdio.h>
int main(void)
{
 int N,i,n,a = 0,b = 0;
 scanf("%d",&n);
 for(i = 0;;i++){
 scanf("%d",&N); 
 if(N % 2 == 0){
 a++;
 }
 else{
 b++;
}
}
 printf("%d %d");
 return 0; 
 }
————————————————
版权声明：本文为CSDN博主「Rick-Boston」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/qq_36630770/article/details/57409400