#include<iostream>
using namespace std;
int main()
{
	int t=0,trab=0,T,dtur=0,drab=0;
    /*定义外界时间t,兔子时间trab,输入时间T，乌龟跑的距离dtur,兔子跑的距离drab*/
    	bool rest=false;/*定义休息标识rest，初始化为false*/
        	cin>>T;
            	while(t!=T)
                	{
                    		dtur+=3;//乌龟移动 
                            		if(!rest)//如果兔子不在休息状态 
                                    		{
                                            			trab++;//兔子时间流逝 
                                                        			drab+=9;//兔子移动 
                                                                    		}
                                                                            		t++;//外界时间流逝 
                                                                                    		if(trab%10==0&&rest==false)
                                                                                            		{//如果兔子时间是10的整数倍且兔子不在休息状态，则回头查看和乌龟的距离 
                                                                                                    			if(drab>dtur)//如果兔子在乌龟前面 
                                                                                                                			{
                                                                                                                            				rest=true;
                                                                                                                                            				trab+=30;//兔子休息，兔子时间先增加30，等外界时间追上 
                                                                                                                                                            			}
                                                                                                                                                                        		}
                                                                                                                                                                                		if(t==trab)//如果外界时间增加到和兔子时间一样，则唤醒兔子 
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
                                                                                                                                                                                                                                