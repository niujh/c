#include <stdio.h>
void main()
{
 int num,sum=0;
 scanf("%d",&num);
 while (num > 0)
 {
 if (num%2 != 0)
 {
 sum += num;
 }
 scanf("%d",&num);
 }
 printf("%d",sum);
} 
