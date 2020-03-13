#include 
int main()
{
double i,k=1,m=1,eps,PI=0;
scanf("%le",&eps);
 for(i=0;k/m>=eps;i++)
 {
 k*=i==0?1:i;
 m*=i*2+1;
 PI+=k/m;
 }
printf("PI=%lf",PI*2);
return 0;
}