#include <stdio.h>
 
int main(void){
	int x, sum;
	
	sum = 0;
	do {
		scanf("%d", &x);
		if (x <= 0)	break;
		if (x % 2 != 0)	sum += x;
	} while (1);
	printf("%d", sum);
	
	return 0;

}