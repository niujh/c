#include<stdio.h>
 
int main()
{
	int T, i;
	int rabbitT=0; //兔子跑的时间
	
	scanf("%d",&T);
	if(T<10)
	{
		printf("^_^ %d\n",T*9);
		return 0;
	}
 
	rabbitT=10;
	for(i=10;i<=T;i++)
	{
		if(i%10==0)   //每10分钟回头，比较
		{
						if(rabbitT*9>i*3 && (T-i)>=30) //兔子大于乌龟，剩余时间不小于30分钟
								i=i+29; //不是i=i+30, 最后还有i++
						else if(rabbitT*9>i*3 && (T-i)<30)  //兔子大于乌龟，剩余时间小于30分钟
						{
								i=T;
								break;
						}
						else if(T-i>=10) //兔子小于乌龟，剩余时间不小于10分钟，兔子真正跑的时间+10
						{
								rabbitT+=10;
								i=i+9;
						}
						else  //兔子小于乌龟，剩余时间小于10分钟, 兔子真正跑的时间+T-i
						{
								rabbitT+=T-i;
								i=T;
								break;
						}
 
		}
	}
 
	if(i*3>rabbitT*9)
				printf("@_@ %d\n",i*3);
	else if(i*3<rabbitT*9)
				printf("^_^ %d\n",rabbitT*9);
	else 
		printf("-_- %d\n",rabbitT*9);
	return 0;
}
