#include<stdio.h>
int main()
{
    int i;
	i=0;
    while(i>=0){
		i++;
		if(i%5==1 && i%6==5 && i%7==4 && i%11==10)
		{
			printf("%d",i);
			i=-1;
		}
		
        
    }
    return 0;

}