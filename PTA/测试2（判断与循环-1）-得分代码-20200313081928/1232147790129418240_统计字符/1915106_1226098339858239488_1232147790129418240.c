#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int i;
	int letter=0,blank=0,digit=0,other=0;
	
	for(i=0;i<10;i++){
		scanf("%c",&c); 
		
		if((c>='a' && c<='z') || (c>='A' && c<='Z')){
			letter++;
		}
		else if(c==' ' || c=='\n'){
			blank++;
		}
		else if(c>='0' && c<='9'){
			digit++;
		}
		else{
			other++;
		}
	}
	
	printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);
	
	return 0;
}