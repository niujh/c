#include <stdio.h>
int main()
{
    double e;
    scanf("%le", &e);
    double s=1;
    double t=1;
    for(int i=1;t>e;i++)
	{
        t = t*i/(2*i+1);
        s += t;
    }
    printf("PI = %.5f\n", 2*s);
    return 0;
}