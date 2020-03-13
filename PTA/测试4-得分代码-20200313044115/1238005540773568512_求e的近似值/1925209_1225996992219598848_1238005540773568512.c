#include<stdio.h>
double fact(int n);
int main() 
{
    int k,n;
    double e=1.0;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
    	e+=1/fact(k);
	}
    printf("%.8f",e);
    return 0;
}
double fact(int n){
	int i;
	double a=1.0;
	for(i=1;i<=n;i++){
		a*=i;
	}
	return a;
}