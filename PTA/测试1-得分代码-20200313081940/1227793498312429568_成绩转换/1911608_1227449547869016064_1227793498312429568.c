#include <stdio.h>
int main()
{
	int score;
	char grade;
	scanf("%d",&score);
	if (score<0)
	    printf("Score is error!");
	else
	    {
	    	if (score<=59)
	    	    printf("%c",'E');
	    	else
	    	    {
	    	    	if (score<=69)
	    	    	    printf("%c",'D');
	    	    	else
	    	    	    {
	    	    	    	if (score<=79)
	    	    	    	    printf("%c",'C');
	    	    	    	else
	    	    	    	    {
	    	    	    	    	if (score<=89)
	    	    	    	    	    printf("%c",'B');
	    	    	    	    	else
	    	    	    	    	    {
	    	    	    	    	    	if (score<=100)
	    	    	    	    	    	   printf("%c",'A');
	    	    	    	    	    	else
	    	    	    	    	    	    printf("Score is error!");
										}
								}
						}
				}
		}
	return 0;
}



