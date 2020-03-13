#include<stdio.h>
int main(void)
{
    int i,r,count=0;
    scanf("%d",&r);
    if(r<=2000||r>2100)
	{
		printf("Invalid year!");
		return 0;
	}
		for(i=2001;i<=r;i++)
        {
            if(i%4==0&&i%100!=0||i%400==0)
			{
                count++;
				printf("%d\n",i);
			}
        }
		if(count==0)
			printf("None\n");
    return 0;
}