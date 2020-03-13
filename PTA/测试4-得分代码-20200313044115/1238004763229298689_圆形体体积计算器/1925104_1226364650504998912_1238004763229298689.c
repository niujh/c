#include<stdio.h>

int main()
{
    float pi=3.141592;
        printf("1-Ball\n");
            printf("2-Cylinder\n");
                printf("3-Cone\n");
                    printf("other-Exit\n");
                        printf("Please enter your commamd:\n");
                            int n=0;
                                float r,h;
                                    scanf("%d",&n);
                                        switch(n)
                                            {
                                                    case 1:
                                                            {
                                                                    
                                                                                printf("Please enter the radius:\n");
                                                                                            scanf("%f",&r);
                                                                                                        printf("%.2f",r*r*r*pi*4/3);
                                                                                                                    break;
                                                                                                                            }
                                                                                                                                    case 2:
                                                                                                                                            {
                                                                                                                                                        printf("Please enter the radius and the height:\n");
                                                                                                                                                                    scanf("%f %f",&r,&h); 
                                                                                                                                                                                printf("%.2f",pi*r*r*h);
                                                                                                                                                                                            break;
                                                                                                                                                                                                    }
                                                                                                                                                                                                            case 3:
                                                                                                                                                                                                                        printf("Please enter the radius and the height:\n");
                                                                                                                                                                                                                                    scanf("%f %f",&r,&h);
                                                                                                                                                                                                                                                printf("%.2f",pi*r*r*h/3);
                                                                                                                                                                                                                                                            break;
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                        if (n!=1 && n!=2 && n!=3)
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                    goto out;
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                        out:    
                                                                                                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                                                                                                            }