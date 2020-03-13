
#include<stdio.h>
	int main()
	{
		int a,c,q,w;
        float b,n;
		char x;
		scanf("%d %c", &a, &x);
		b=a/2.0;
        c=a/2;
        n=b-c;
        if(n>=0.5){c++;}
		for (q=0; q <c; q++) {
			for (w=0; w<a; w++) {
				printf("%c", x);
			}
            printf("\n");
		}
	}
