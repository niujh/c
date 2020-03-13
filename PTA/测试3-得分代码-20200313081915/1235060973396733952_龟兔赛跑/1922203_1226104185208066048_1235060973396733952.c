#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	int t = T;
	while ( T>90)
	{
		T = T-90;
	}
	//平局 
	if ( (T==0) || (T==30) || (T==45 )|| (T==60) || (T==90))
	{
		printf("-_- %d\n", 3*t);
	}
	//兔子赢（比较复杂） 
	if ( T>0&&T<10 ) //跑赢 
	{
		printf("^_^ %d\n", t/90*270+9*T); 
	}
	if ( T>=10&&T<30 ) //躺赢 
	{
		printf("^_^ %d\n", t/90*270+90);
	}
	if ( T>45&&T<50 ) //跑赢 
	{
		printf("^_^ %d\n", t/90*270+135+(T-45)*9);
	}
	if ( T>=50&&T<60 ) //躺赢
	{
		printf("^_^ %d\n", t/90*270+180);
	}
	//乌龟赢 
	if ( (T>30&&T<45) || (T>60&&T<90))
	{
		printf("@_@ %d\n", 3*t);
	}
	return 0;
}
                                                                                                                                                                       