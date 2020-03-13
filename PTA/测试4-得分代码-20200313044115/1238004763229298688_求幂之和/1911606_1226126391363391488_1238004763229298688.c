#include<stdio.h>
#include<math.h>
int main()
{
  int N,i,result;
  scanf("%d",&N);
  result=0;
  for(i=1;i<=N;i++)
  {
 result+=pow(2,i);
  }
  printf("result = %d",result);
  return 0;  
}