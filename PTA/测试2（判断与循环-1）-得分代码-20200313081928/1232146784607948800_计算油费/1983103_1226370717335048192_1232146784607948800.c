#include<stdio.h>
int main() {
    int num1,num2;
    char c;
    scanf("%d %d %c",&num1,&num2,&c);
    switch(num2) {
        case 90:
            switch(c) {
                case 'm':
                    printf("%.2lf",num1*6.95*0.95);
                    break;
                case 'e':
                    printf("%.2lf",num1*6.95*0.97);
                    break;
            }
            break;
        case 93:
            switch(c) {
                case 'm':
                    printf("%.2lf",num1*7.44*0.95);
                    break;
                case 'e':
                    printf("%.2lf",num1*7.44*0.97);
                    break;
            }
            break;
        case 97:
            switch(c) {
                case 'm':
                    printf("%.2lf",num1*7.93*0.95);
                    break;
                case 'e':
                    printf("%.2lf",num1*7.93*0.97);
                    break;
            }
            break;

    }
    return 0;
}