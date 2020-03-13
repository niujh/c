#include<stdio.h>
double fact(int n);
int main()
{
	int n;
	scanf("%d",&n);
	
	double sum = 1;
	for(int i = 1 ; i <= n ;i++)
	{
		sum += 1.0/fact(i);
		 if (i == 11) {  
            break;
        }
	}
	printf("%.8f\n",sum);
	return 0;
}
 
double fact(int n)
{
	int s = 1;
	for(int i = 1; i <= n ; i++)
	{
		s = s*i;
	}
	return s;
}

