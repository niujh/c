# include<stdio.h>
int main()
{
	int m,n;
     double i=1;
     	double sum=1.0;
         	scanf("%d",&n);
             	for(m=1;m<=n;m++)
                 	{
                     		i=i*m;
                             		sum=sum+1.0/i;
                                     	}
                                         	printf("%0.8lf",sum);
                                             	return 0;
                                                 }
                                                 