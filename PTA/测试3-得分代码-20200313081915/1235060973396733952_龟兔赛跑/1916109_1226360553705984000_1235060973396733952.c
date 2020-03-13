
#include <stdio.h>
int main()
{
	int t;
	if(scanf("%d",&t)){};
	int w=0,r=0;
	for(int i=1;i<=t;i++)
	{
		w+=3;//乌龟跑过的路程
		r+=9;//兔子跑过的路程
		if(i%10==0&&r>w)//兔子每跑十分钟，进行一次判断
		{
			if(t>=i+30)
			{
				w+=30*3;//乌龟在30分钟内走过的路程
				i+=30;//时间向前推进30分钟
			}else
			{
			    w+=(t-i)*3;
			    i=i+(t-i);
		    }
		}	
	}
	if(r==w)
	{
		printf("-_- %d",r);
	}else if(r>w)
	{
		printf("^_^ %d",r);
	}else
	{
		printf("@_@ %d",w);
	}
	return 0;
}

