#include <stdio.h>
#define pi 3.1415926   
 
int main()
{
    int  index = 0;       
    double   r = 0;     
    double   h = 0;        
    double res = 0;         
     
    while(1)
    {
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\n");
        printf("Please enter your command: ");
        scanf("%d", &index);
         
        if(index == 1)    
        {
            printf("Please enter the radius: ");
            scanf("%lf", &r);
             
            res = (4.0/3.0)*(pi*r*r*r);
            printf("%.2lf\n", res);
        }
        else if(index == 2)     
        {
            printf("Please enter the radius and the height: ");
            scanf("%lf %lf", &r, &h);
             
            res = pi*(r*r)*h;
            printf("%.2lf\n", res);
        }
        else if(index == 3)     
        {
            printf("Please enter the radius and the height: ");
            scanf("%lf %lf", &r, &h);
             
            res = (1.0/3.0)*(pi*r*r*h);
            printf("%.2lf\n", res)
        }
        else                 
            break
    }
 
    return 0;
}