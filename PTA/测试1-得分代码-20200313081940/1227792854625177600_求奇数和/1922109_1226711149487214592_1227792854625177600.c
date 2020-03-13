#include<stdio.h>
int main()
{
	int n, sum = 0;
        scanf("%d",&n);
 
	while(n>0)
	{
            if(n%2 == 1){sum+=n;}
	    scanf("%d",&n);
	}
	printf("%d\n",sum);
	
	return 0;
}