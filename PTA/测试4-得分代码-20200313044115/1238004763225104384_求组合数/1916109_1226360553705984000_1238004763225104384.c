#include<stdio.h>
int a[10005]={0,1};
int main(){
	int n,m;
	scanf("%d%d",&m,&n);
	double sum1=1;
	for(int i=2;i<=m;i++){
		sum1*=i;
	}
	if(n==m){
		printf("result = 1");
	}else {
		double sum=1;
		for(int i=n;i>n-m;i--){
			sum=sum*i;
		}
		printf("result = %.0lf",(sum/sum1));
		
	}
	return 0;
}
