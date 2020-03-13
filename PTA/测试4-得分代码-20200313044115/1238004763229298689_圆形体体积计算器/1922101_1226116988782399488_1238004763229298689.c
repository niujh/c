#include<stdio.h>
#include<math.h>
#define PI 3.1415926535

void menu(void);    //输出选项界面
void ball(void);    //计算球体体积
void cylinder(void);    //计算圆柱体体积
void cone(void);    //计算圆锥体体积

int main(){
    int command;
    while(1){
        menu();
        scanf("%d",&command);
        switch(command){
            case 1:ball();break;
            case 2:cylinder();break;
            case 3:cone();break;
            default:return 0;
        }
    }
}
void menu(){
    printf("1-Ball\n");
    printf("2-Cylinder\n");
    printf("3-Cone\n");
    printf("other-Exit\n");
    printf("Please enter your command:\n");
}
void ball(void){
    double r,V;
    printf("Please enter the radius:\n");
    scanf("%lf",&r);
    V=(4.0/3)*PI*pow(r,3);
    printf("%.2lf\n",V);
}
void cylinder(void){
    double r,h,V;
    printf("Please enter the radius and the height:\n");
    scanf("%lf %lf",&r,&h);
    V=h*PI*pow(r,2);
    printf("%.2lf\n",V);
}
void cone(void){
    double r,h,V;
    printf("Please enter the radius and the height:\n");
    scanf("%lf %lf",&r,&h);
    V=(1.0/3)*h*PI*pow(r,2);
    printf("%.2lf\n",V);
}