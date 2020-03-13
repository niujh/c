#include <stdio.h>
int main()
{
	int t;
	if(scanf("%d",&t)){};
	int w=0,r=0;
	for(int i=1;i<=t;i++)
	{
		w+=3;
		r+=9;
		if(i%10==0&&r>w)
		{
			if(t>=i+30)
			{
				w+=30*3;
				i+=30;
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
