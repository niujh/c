#include<iostream>

using namespace std;

int main()
{
	int T,t=0,t1=0;
	int Dgui=0,Dtu=0;
	bool rest=false; 
	cin>>T;
	while(t!=T)
	{
		Dgui+=3;
		if(!rest)
		{
			t1++;
			Dtu+=9;
		}
		t++;
		if(t1%10==0 && !rest)
		{
			if(Dtu>Dgui)
			{
				rest=true;
				t1+=30;
			}
		} 
		if(t==t1)
		{
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
