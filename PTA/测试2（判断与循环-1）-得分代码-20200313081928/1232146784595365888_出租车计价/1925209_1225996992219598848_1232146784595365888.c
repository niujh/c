#include<stdio.h>
int main(){
	int h;
	double s;
	double p,p1,p2;
	scanf("%lf %d",&s,&h);
	if(s<=3){
		p1=10;
	}else if(s<=10){
		p1=10+(s-3)*2.0;
	}else{
		p1=10+7*2+3.0*(s-10);
	}
	p2=h/5*2;
	p=p1+p2;
	printf("%.0f\n", p);
	return 0;
}