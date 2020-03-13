#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    float V,r,h;
    do{
    printf("1-Ball\n"
           "2-Cylinder\n"
           "3-Cone\n"
           "other-Exit\n"
           "Please enter your command:\n");
    scanf("%d", &n);
    if(n==1)
    {
        printf("Please enter the radius:\n");
        scanf("%f", &r);
        V=(4*3.1415926*r*r*r)/3;
        printf("%.2f\n", V);
    }
    else if(n==2)
    {
        printf("Please enter the radius and the height:\n");
        scanf("%f %f", &r, &h);
        V=3.1415926*r*r*h;
        printf("%.2f\n", V);
    }
    else if(n==3)
    {
        printf("Please enter the radius and the height:\n");
        scanf("%f %f", &r, &h);
        V=(3.1415926*r*r*h)/3;
        printf("%.2f\n", V);
    }
    else
        exit(0);
    }while(1);
}
