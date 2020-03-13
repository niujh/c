#include <stdio.h>

int main()
{
  char a[82];
  int i;
  gets(a);
  for(i=0; a[i]!='\0'; i++);
    for(i=i-1; i>=0; i--)
  {
      printf("%c", a[i]);
  }
}
