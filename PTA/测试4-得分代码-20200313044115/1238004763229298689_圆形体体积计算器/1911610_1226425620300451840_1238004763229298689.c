#include<stdio.h>
#include<math.h>
#define pi 3.1415926535
int main()
{
    int i;
    double r,h;
    double s;
    while(1)
    {
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:");
        scanf("%lf",&i);
    
        if(i==1)
        {
            printf("Please enter the radius:\n");
            scanf("%lf",&r);
            printf("%.2lf\n",4*pi*pow(r,3)/3);
        }
        else if(i==2)
        {
            printf("Please enter the radius and height:\n");
            scanf("%lf%lf",&r,&h);
            s=pi*pow(r,2)*h;
            printf("%.2f\n",s);
        }
        else if(i==3)
        {
            printf("Please enter the radius and height:\n");
            scanf("%d%d",&r,&h);
            s=1/3*pi*pow(r,2)*h;
            printf("%.2f\n",s);
        }
        else
        {
            break;

        }
    }
    return 0;
}