#include<stdio.h>
int main()
{
	int t=0,t1=0,t2=0,W=0,T=0;
	scanf("%d",&t);
    while(t1<t&&t>0){
    	if(t1%10==0&&T>W){
    		t2=t1+30;
    		while(t1<t2&&t1<t){
    			W+=3;
    			t1++;
			}
		}else{
			t2=t1+10;
			while(t1<t2&&t1<t){
				W+=3;
				T+=9;
				t1++;
			}
		}	
	}
	if(W>T){
			printf("@_@ %d",W);
		}else if(W==T){
			printf("-_- %d",W);
		}else{
			printf("^_^ %d",T);
		}
    return 0;
}
