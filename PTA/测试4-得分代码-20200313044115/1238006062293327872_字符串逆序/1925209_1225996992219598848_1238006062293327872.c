#include<stdio.h>

int main() 
{
	int i,k,sum;
	char c;
	char x[80],y[80];
	c=getchar();
	for(i=0;c!='\n';i++){
		x[i]=c;
		c=getchar();
        sum++;	
	}
	for(i=0,k=sum-1;i<sum;i++,k--){
		y[k]=x[i];
	}
	for(i=0;i<sum;i++){
		printf("%c",y[i]);
	}
    return 0;
}
