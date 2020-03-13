#include <stdio.h>
int main()
{
	int num,m,n,achar;
	scanf("%d %c",&num,&achar);
	//一共有奇数个行 拆分为上下部分 上部分为不完整倒三角 即最后一行不打印 	
	 int i,j,t,hang,Sn_sum,Sy_char=0;//循环计数变量
	 
	 t=1;
	 hang=-1; 
	 Sn_sum=1; 
	while(Sn_sum<=num)
	{
		
		Sy_char=num-Sn_sum;	
		 hang+=2;
		//下次要加的项 
		t+=2;//1 3 5 7等差数列 
		Sn_sum+=2*t;//相当于等差数列求和 
		
	}
 
	
	//打印上三角
	m=hang/2+1;	//m上三角行数 ,奇数行除以2后+1 
 
	//上：倒三角
	for(i=0;i<m-1;i++)//for(i=0;i<m;i++)
	{
		for(j=0;j<i;j++)
		printf(" ");
		for(j=0;j<2*(m-i)-1;j++)
		printf("%c",achar);
		//printf("*");
		printf("\n"); 
	 } 
	 
		n=hang-hang/2;	//n下三角行数 	
		
 
	//下：正三角
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
	// printf("%d\n",hang);在1000范围内 最多有43行 
	return 0; 
}
