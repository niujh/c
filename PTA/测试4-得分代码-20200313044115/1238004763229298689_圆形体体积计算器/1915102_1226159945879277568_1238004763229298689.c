#include<stdio.h>
#include<math.h>
int main(void)
{
    int flag=1,slct;
    float r,ball,cylinder,cone;
    while(flag==1)
    {
        printf("1-Ball/n2-Cylinder/n3-Cone/nother-Exit/n");
        printf("Please enter your command:/n");
        scanf("%d",&slct);
        if(slct==1){
            printf("Please enter the radius:");
            scanf("%f",r);
            ball=4/3*pi*r*r*r;
            printf("%.2f",ball);
        }
    }
}