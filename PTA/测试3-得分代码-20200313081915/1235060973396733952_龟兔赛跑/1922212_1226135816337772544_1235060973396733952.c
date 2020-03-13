#include<iostream>
using namespace std;
int main()
{
	int t=0,trab=0,T,dtur=0,drab=0;
    bool rest=false;
	cin>>T;
	while(t!=T)
	{
		dtur+=3; 
		if(!rest)
		{
			trab++;
			drab+=9;
		}
		
		if(trab%10==0&&rest==false)
		{ 
			if(drab>dtur)
			{
				rest=true;
				trab+=30;
			}
		}
		if(t==trab)
		rest=false;
	}
	if(drab>dtur)
	cout<<"a"<<' '<<drab;
	else if(drab<dtur)
	cout<<'<<' '<<dtur;
	else
	cout<<"--"<<' '<<dtur;
	return 0;
}
