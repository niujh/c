#include <stdio.h>
int main()
{
	int num,m,n,achar;
	scanf("%d %c",&num,&achar);
	 int i,j,t,hang,Sn_sum,Sy_char=0;
	 
	 t=1;
	 hang=-1; 
	 Sn_sum=1; 
	while(Sn_sum<=num)
	{
		Sy_char=num-Sn_sum;	
		 hang+=2;
		t+=2; 
		Sn_sum+=2*t; 
	}
	m=hang/2+1;	
 
	for(i=0;i<m-1;i++)//for(i=0;i<m;i++)
	{
		for(j=0;j<i;j++)
		printf(" ");
		for(j=0;j<2*(m-i)-1;j++)
		printf("%c",achar);
		//printf("*");
		printf("\n"); 
	 } 
	 
		n=hang-hang/2;		
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1);j++)
		printf(" ");
		for(j=0;j<2*i+1;j++)
		printf("%c",achar);
		//printf("*");
		
		printf("\n");
	} 
	 printf("%d\n",Sy_char);
	return 0; 
}