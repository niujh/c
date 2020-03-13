#include <stdio.h>

int main()
{
  int t;   
  int l1;  
  int l2; 

  l1=0;
  l2=0;

  scanf("%d",&t);
  if (t<=0) 
  {
    printf("输入错误！\n");
    return(0);
  }

  while (t>=10)
  {
  t=t-10;  
    l1=l1+3*10; 
    l2=l2+9*10; 

    if (l2>l1) 
    {
      if (t>=30) 
      {
        t=t-30;
        l1=l1+3*30; 
      }
      else 
      {
        l1=l1+3*t; 
        t=0;  
        break; 
      }
    }
  }
  
  l1=l1+3*t; 
  l2=l2+9*t;

  if (l1>l2) printf("^_^ %d\n",l1);
  else if (l2>l1) printf("@_@ %d\n",l2);
          else printf("-_- %d\n",l1);
  
  return 0;
}