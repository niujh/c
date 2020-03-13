#include<stdio.h>
int main()
{
 int sum, b, i, q, t, k, j, g, N;
 char c;
 sum = 1; b = 1;
 scanf("%d %c", &N, &c);
 for (i = 1; sum <= N; i++)
 {
  b = b + 2;
  sum = sum + b * 2;
 }
 i = i - 1;
 q = i;
 sum = sum - 2 * b;

 k = 0;
 for (j = i; j >= 1; j--)
 {
  for (g = 1; g <= k; g++)
   printf(" ");
  for (t = 1; t <= 2 * j - 1; t++)
   printf("%c", c);
  printf("\n");
  k++;
 }
 k = k - 2;
 for (j = 2; j <= q; j++)
 {
  for (g = 1; g <= k; g++)
   printf(" ");
  for (t = 1; t <= 2 * j - 1; t++)
   printf("%c", c);
  printf("\n");
  k--;
 }
           printf("%d", N - sum);
 return 0;
}