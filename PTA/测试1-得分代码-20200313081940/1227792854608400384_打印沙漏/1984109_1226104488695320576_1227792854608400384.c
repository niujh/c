#include<stdio.h>
int main() 
{
  int a[105];
  a[1] = 1;
  for(int i = 2; i <= 30; i++)
    a[i] = a[i-1] + 2*(2*i-1);
  int n, m, c = 0;
  char ch;
  scanf("%d %c", &n, &ch);
  for(int i = 1; i <= 30; i++) {
    if(a[i] == n) {
      m = i;
      break;
    }
    else if(a[i] > n) {
      m = i-1;
      c = n - a[m];
      break;
    }
  }
  for(int i = m; i >= 1; i--) {
    for(int j = m; j > i; j--)
      printf(" ");
    for(int j = 1; j <= 2*i-1; j++)
      printf("%c", ch);
    printf("\n"); 
  }  
  for(int i = 2; i <= m; i++) {
    for(int j = m; j > i; j--)
      printf(" ");
    for(int j = 1; j <= 2*i-1; j++)
      printf("%c", ch);
    printf("\n"); 
  } 
  printf("%d\n", c); 
  return 0;
} 
