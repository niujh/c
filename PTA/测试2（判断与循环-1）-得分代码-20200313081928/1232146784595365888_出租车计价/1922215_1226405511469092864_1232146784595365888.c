#include<stdio.h>
int main()
{
	double i, x,c;
	int time;
	scanf("%lf %d",&x,&time);
	i = time / 5;
	if (x <= 3) {
		c =10 + i * 2;
	}
	else if (x >3 && x < 10) {
		c= 10+(x-3)*2+i*2;
	}
	else  {
		c= 10 + (x - 10) * 3 + 14+ i * 2;
	}

    int m = c;  
    double r = c - m;  
    if ( r >= 0.5)  
        m = m + 1; 
    
    
    printf("%d\n", m); 
    
    return 0; 

}