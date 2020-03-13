#include <stdio.h>
#include <math.h>
int main()
{
	int n;			//有几个数
	int a[1001];	//存储数据的空间
	int i;		//用于循环和数组下标
	int ji=0,ou=0;	//ji→统计奇数数量，ou→统计偶数数量
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			ou++;
		else
			ji++;
	}
	printf("%d %d\n",ji,ou);
	return 0;
}


