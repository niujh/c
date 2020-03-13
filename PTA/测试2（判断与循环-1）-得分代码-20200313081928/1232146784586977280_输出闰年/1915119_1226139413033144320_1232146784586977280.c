#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	    if (((n - 2001) >= 3)&&(n<=2100))
		    for (i = 2001; i <= n; i++) {
			    if ((i % 4 == 0) && (i % 100 != 0))
				    printf("%d\n", i);
			    else if (i % 400 == 0)
				    printf("%d\n", i);
			    else
				    ;
		    }
	    else if ((n > 2000)&&(n<=2100))
		    printf("None");
	    else
		    printf("Invalid year!");
	return 0;
}