#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double V;
    double r,h;
    double pi = 3.1415926535;
    while (1)
    {
        printf ("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
        scanf ("%d",&n);
        switch (n)
        {
             case 1:
             {
                    printf ("Please enter the radius:\n");
                    scanf ("%lf",&r);
                    V = 4.0 / 3 * pi * pow (r,3);
                    printf ("%.2f\n",V);
                    break;
             }
             case 2:
             {
                    printf ("Please enter the radius and the height:\n");
                    scanf ("%lf %lf",&r,&h);
                    V = pi * h * pow (r,2);
                    printf ("%.2f\n",V);
                    break;
             }
             case 3:
             {
                    printf ("Please enter the radius and the height:\n");
                    scanf ("%lf %lf",&r,&h);
                    V = 1.0 / 3 * pi * h * pow (r,2);
                    printf ("%.2f\n",V);
                    break;
             }
             default:return 0;
        }
    }
    return 0;
}