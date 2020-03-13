#include <stdio.h>
int main(){
int a,b,c;
scanf("%d%d",&a,&b);//从键盘获得两个数 并赋值给a b
c = a * b; //c就是乘积
printf("%d x %d = %d",a,b,c);// 输出结果 也可写作printf("%d x %d = %d",a,b,a*b);
return 0;
}