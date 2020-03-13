
#include <stdio.h>
int main()
{
    int a,i,j;
    char b;
    scanf("%d %c",&a,&b);
    if (a%2==0){
    for(i=1;i<=(a*0.5);i++)
    {
    	for(j=1;j<=a;j++){
    		printf("%c",b);
    		
		}
		printf("\n");    
    }
    }
    else{for(i=1;i<=(a*0.5)+1;i++)
    {
    	for(j=1;j<=a;j++){
    		printf("%c",b);
    		
		}
		printf("\n");    
    }
        
    }
    return 0;
}
