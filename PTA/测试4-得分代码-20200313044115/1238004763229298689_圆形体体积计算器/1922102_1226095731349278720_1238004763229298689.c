#include<stdio.h>
#include<math.h>
int main()
{
    int zl;
    double r,h,v;
    while(1){
    printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
    scanf("%d",&zl);
    if(zl==1)
    {
        printf("Please enter the radius:\n");
        scanf("%lf",&r);
        v=(4*3.141592*pow(r,3))/3;
        printf("%.2f\n",v);
    }
    else if(zl==2)
    {
        printf("Please enter the radius and the height:\n");
        scanf("%lf %lf",&r,&h);
        v=3.141592*h*pow(r,2);
        printf("%.2f\n",v);
    }
    else if(zl==3)
    {
        printf("Please enter the radius and the height:\n");
        scanf("%1f %1f",&r,&h);
        v=(3.141592*h*pow(r,2))/3;
        printf("%.2f\n",v);
    }
    else{break;}
    }
    return 0;
}