
#include <stdio.h>
 
int main(void){
	float km, price = 0; 
	int min;
	
	scanf("%f %d", &km, &min);
	if( km > 10 )	price = 3 * (km - 10) + 10 + 14;	
	else if( km > 3)	price = 2 * (km - 3) + 10;
	else	price = 10;
	price += min / 5 * 2;   
	printf("%.0f", price);    
	
	return 0;
}