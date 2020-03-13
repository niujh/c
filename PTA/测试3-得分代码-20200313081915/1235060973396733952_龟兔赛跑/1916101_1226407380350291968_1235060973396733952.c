#include<stdio.h>
int main()
{
    int t,T,g,i,n;
    t=g=n=0;
    scanf("%d",&T);
    for (i=0;i<=T;)
    {
        g=3*i;
        t=9*(i-n*30);
        if ((i%10==0)&&(t>g)&&(i!=0))
        {
            i+=30;
            if (i>T)
            {
                g=3*T;
                break;
            }
            n++;
        }
        else {
            i++;
        }
    }
      if (t>g)
      {
          printf("^_^ %d",t);
      }
      if (t<g)
      {
          printf("@_@ %d",3*T);
      }
      if (t==g)
       {
           printf("-_- %d",3*T);
       }
}