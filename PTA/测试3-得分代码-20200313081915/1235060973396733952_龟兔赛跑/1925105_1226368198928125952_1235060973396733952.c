#include <stdio.h>
//#include <math.h>
#include <stdbool.h>
int main()
{
int time,i,tr=0;//i为外界时间，tr为记录兔子时间
int ts=0,rs=0;
bool isRest = false;//声明布尔值，记录兔子状态，是否休息
scanf("%d",&time);
for(i=1;i<=time;i++){
ts+=3;
if(!isRest){//非休息状态时，兔子距离增加
rs+=9;
tr++;
}
if(i%10==0&&!isRest){//当外界时间为10的倍数且兔子为非休息状态时，比较龟兔距离
if(ts<rs){
tr+=30;//兔子进入休息状态，兔子时间直接增加30
isRest=true;
}
}
if(i==tr){//当外界时间与兔子时间相同时，唤醒兔子
isRest = false;
}
}
if(ts>rs){
printf("@_@ %d",ts);
}else if(ts==rs){
printf("-_- %d",rs);
}else{
printf("_ %d",rs);
}
return 0;
}