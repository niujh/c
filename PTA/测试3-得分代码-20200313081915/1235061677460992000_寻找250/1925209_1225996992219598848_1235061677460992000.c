#include<stdio.h>

int main() 
{
    int i,a;
    int count=0;
    for(i=1; ;i++){
    	scanf("%d",&a);
    	count+=1;
    	if(a==250){
    		printf("%d",count);
		}
	}
    return 0;
}