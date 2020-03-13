#include<stdio.h>

int main(){
	
	int minute,i,count=0,rabbit=0,turtle=0;//count计算兔子休息的次数 i计时
	scanf ("%d",&minute);
	
	for(i=1;i<=minute;i++){
		rabbit =(i - count * 30 ) * 9;
		turtle = i * 3;//此处主要用于兔子与乌龟赛跑距离便于比较 
		if(rabbit > turtle && i % 10 == 0){	
			i = i + 30;
			count ++;
		}
	}
	turtle = minute * 3;//乌龟距离 
	if(rabbit > turtle) 
		printf("^_^ %d",rabbit);
	else if(rabbit<turtle) 
		printf("@_@ %d",turtle);
	else 
		printf("-_- %d",turtle);
		
	return 0;
}
