#include <stdio.h>
#include <math.h>
int main()
{
    int a=0,n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
		a+=pow(2,i);
	}
	printf("result = %d",a);
	
	return 0;

 
}