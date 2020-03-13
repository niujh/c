#include<stdio.h>
void main()
{
    float a;
    scanf("%f",%a)
    if (a==0)
    {
        printf("f(0.0)=0.0");
        }
        else
        {
            printf("f(");
            printf("%.1f",a);
            printf(")=");
            printf("%.1f",1.0/a);
        }
}







