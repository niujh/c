#include<stdio.h>

#define pi 3.141592654

void _1()
{
    float r;
    printf("Please enter the radius:\n");
    scanf("%f", &r);
    printf("%.2f\n", pi * r * r* r * 4 / 3);
}

void _2()
{
    float r, h;
    printf("Please enter the radius and the height:\n");
    scanf("%f %f", &r, &h);
    printf("%.2f\n", pi * r* r * h);
}


void _3()
{
    float r, h;
    printf("Please enter the radius and the height:\n");
    scanf("%f %f", &r, &h);
    printf("%.2f\n", pi * r* r * h / 3);
}

int main()
{
    int n, flag=1;
    while(flag)
    {
        printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
                _1();
                break;
            case 2:
                _2();
                break;
            case 3:
                _3();
                break;
            default:
                flag=0;
        }
    }

    return 0;
}