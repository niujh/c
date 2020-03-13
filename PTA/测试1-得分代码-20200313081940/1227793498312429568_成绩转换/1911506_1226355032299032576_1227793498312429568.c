#include<stdio.h>
int main ()
{
float s=1;
int n;
char ch;
scanf("%f",&s);
n=s/10;
switch(n){
    case 10:
    case 9:ch='A';break;
    case 8:ch='B';break;
    case 7:ch='C';break;
    case 6:ch='D';break;
    default:ch='E';
}    
printf("%c\n",ch);
return 0;
}