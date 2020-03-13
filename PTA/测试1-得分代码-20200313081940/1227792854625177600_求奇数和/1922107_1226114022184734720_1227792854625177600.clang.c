#include<stdio.h>
int main()
{
	int n, s=0;
	for(int i; ;i++){
		scanf("%d", &n);
		if(n%2!=0)
			s+=n;
		if((n==0||n<0)&n%2!=0){
			s=s-n;
			break;
		}
		if((n==0||n<0)&&n%2==0)
			break;
	}
	printf("%d", s);
	return 0;
 } 
