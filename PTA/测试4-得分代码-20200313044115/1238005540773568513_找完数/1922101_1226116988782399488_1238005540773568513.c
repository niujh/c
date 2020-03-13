#include <stdio.h>
int WanShu(int n);
int main()
{
  int i, j, k, m, n;
  scanf("%d %d", &m, &n);
  for(i=m; i<=n; i++)
  {
      if(WanShu(i)!=0)
      {
          k=WanShu(i);
          printf("%d = 1", k);
          for(j=2; j<k; j++)
          {
              if(k%j==0)
              {
                  printf(" + %d", j);
              }
          }