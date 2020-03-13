#include<iostream>

using namespace std;

int main()
{
	int T,t=0,t1=0;//t时间变化,t1兔子时间变化 
	int Dgui=0,Dtu=0;//距离
	bool rest=false;//休息标识 
	cin>>T;
	while(t!=T)
	{
		Dgui+=3;
		if(!rest)
		{//如果兔子没有休息 
			t1++;
			Dtu+=9;
		}
		t++;
		if(t1%10==0 && !rest)
		{//回头看乌龟 
			if(Dtu>Dgui)
			{
				rest=true;
				t1+=30;
			}
		} 
		if(t==t1)
		{//小兔子睡醒了 
			rest=false;
		}
	}
	if(Dtu>Dgui)
	{
		cout<<"^_^"<<' '<<Dtu;
	}
	else if(Dtu<Dgui)
	{
		cout<<"@_@"<<' '<<Dgui;
	}
	else
	{
		cout<<"-_-"<<' '<<Dtu;
	}	 
	return 0;
}