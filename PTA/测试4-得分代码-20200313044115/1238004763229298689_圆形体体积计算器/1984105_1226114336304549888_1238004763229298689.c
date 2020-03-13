#include<stdio.h>
int main()
{
    int n;
    double r,h,V,pi=3.1415926535;
    while(1)
    {
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            {
                printf("Please enter radius:\n");
                scanf("%lf",&r);
                V=(4.0/3.0)*(pi*r*r*r);
                printf("%.2lf\n",V);
                break;
            }
            case 2:
            {
                printf("Please enter thr radius and the height:\n");
                scanf("%lf %lf",&r,&h);
                V=pi*(r*r)*h;
                printf("%.2lf\n",V);
                break;
            }
            case 3:
            {
                printf("Please enter the radius and the height:\n");
                scanf("%lf %lf",&r,&h);
                V=(1.0/3.0)*(pi*r*r*h);
                printf("%.2lf\n",V);
            }
            default:return 0;
        }
    }
    return 0;
}