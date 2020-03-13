#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  char a[500],b[500];
  int i,j,len,t=0;
  gets(a);
  len=strlen(a);
  for(i=len;i>=0;i--){
  b[t]=a[i];
  if(t!=0)
  printf("%c",b[t]);
  t++;
  }  
  system("PAUSE");	
  return 0;
}