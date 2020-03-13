#include"stdio.h" 
#include"math.h" 
main() 
{ 
int a,b,c,d,e,f,g,h,A,B,C,D,E,F,G,H; 
long i,sum=0; 
scanf("%d %d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&G,&H); 
scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h); 
for(i=2;i<pow(2,63);i++) 
{ 
if(i%A==a&&i%B==b&&i%C==c&&i%D==d&&i%E==e&&i%F==f&&i%G==g&&i%H==h) 
{ 

sum=i; 
break; 
} 
} 
printf("%ld",sum); 
} 