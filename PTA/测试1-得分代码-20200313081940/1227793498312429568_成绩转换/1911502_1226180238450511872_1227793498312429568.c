#include<stdio.h>
int main()
{
int N;
scanf("%d",&N);
if(N>=90)
{
printf("A\n");
}
else if (N<90 && N>=80)
{
printf("B\n");
}
else if (N<80 && N>=70)
{
printf("C\n");
}
else if(N<70 && N>=60)
{
printf("D\n");
}
else
{
printf("E\n");
}
return 0;
}