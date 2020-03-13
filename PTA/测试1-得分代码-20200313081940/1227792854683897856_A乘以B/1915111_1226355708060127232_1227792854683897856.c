#include<stdio.h>
#include<math.h>
int main()
{
 int A,B,C;
 printf("Please enter two integer ");
 scanf("%d %d",&A,&B);
 if(fabs(A)<=100&&fabs(B)<=100)
       C=A*B;
 else
  printf("error\n");
 printf("%d\n",C);
 return 0;
}