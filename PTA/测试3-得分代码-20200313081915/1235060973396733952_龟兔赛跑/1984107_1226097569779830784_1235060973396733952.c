
#include<iostream>

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
		t++; 
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
	cout<<"^_^"<<' '<<drab;
	else if(drab<dtur)
	cout<<"@_@"<<' '<<dtur;
	else
	cout<<"-_-"<<' '<<dtur;
	return 0;
}
