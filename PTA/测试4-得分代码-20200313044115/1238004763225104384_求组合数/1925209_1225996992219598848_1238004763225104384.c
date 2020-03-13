#include<stdio.h>
double fact(int n);
int main(){
	int m,n;
	int t;
	scanf("%d %d",&m,&n);
	t=fact(n)/(fact(m)*fact(n-m));
	printf("result = %d",t);
}
double fact(int n){
	int i;
	double a=1.0;
	for(i=1;i<=n;i++){
		a*=i;
	}
	return a;
}