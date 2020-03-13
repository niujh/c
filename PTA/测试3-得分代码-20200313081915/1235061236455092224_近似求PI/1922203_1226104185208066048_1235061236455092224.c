#include<stdio.h>
double fenzi(int n);
double fenmu(int n);
int main()
{
    int n=0;
	double sum=0;
	double eps;
	scanf("%le",&eps);
	do
    {
        sum+=fenzi(n)/fenmu(n);
			  		n++;
    }while((fenzi(n)/fenmu(n))>=eps);
	if(sum>=eps)
	sum+=fenzi(n)/fenmu(n);
	printf("PI = %.5lf", sum * 2);
	return 0;

}
double fenzi(int n)
{
    if(n==0)
	return 1;
	
	return n*fenzi(n-1);
}
double fenmu(int n)
{
    if(n==0)
	return 1;
	
	return (n*2+1) * fenmu(n-1);
}