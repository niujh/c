#include<stdio.h>

int main() 
{
    int N,i,n;
    int a=0,b=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
    	scanf("%d",&n);
    	if(n%2==0){a++;
		}else{
			b++;
		}
	}
	printf("%d %d",b,a);
    return 0;
}
