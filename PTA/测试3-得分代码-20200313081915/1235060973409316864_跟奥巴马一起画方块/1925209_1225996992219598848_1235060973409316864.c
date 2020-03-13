#include<stdio.h>

int main() 
{
	int N,i,k;
	char c;
    scanf("%d %c",&N,&c); 
    for(k=1;k<=(N+1)/2;k++){
    	for(i=1;i<=N;i++){
    		printf("%c",c);
		}
		printf("\n");
	}
    return 0;
}