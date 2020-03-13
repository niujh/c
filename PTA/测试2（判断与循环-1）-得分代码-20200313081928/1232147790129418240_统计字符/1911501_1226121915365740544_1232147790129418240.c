
#include <stdio.h>
 
 int main(void){
 	int i, letter, blank, digit, other;
     	char ch;
         	
             	letter = blank = digit = other = 0;
                 	for (i = 0; i < 10; i++){
                     		scanf("%c", &ch);
                             		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')	letter++;
                                     		else if(ch == ' ' || ch == '\n')	blank++;
                                             		else if(ch >= '0' && ch <= '9')	digit++;
                                                     		else	other++;
                                                             	}
                                                                 	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
                                                                     	
                                                                         	return 0;
 }                                                                            