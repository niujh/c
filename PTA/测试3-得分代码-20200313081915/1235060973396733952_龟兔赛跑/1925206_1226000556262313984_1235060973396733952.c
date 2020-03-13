#include <stdio.h>
int main()
{
  int gui=0,tu=0,time=0,t=0,run=1,cnt=0;
  scanf("%d",&t);
  for(time=1;time<=t;time++)
  {
    gui=gui+3;

    if(run==1)
    {
      tu=tu+9;
    }
    if(time%10==0&&tu>gui)
    {
      run=0;
    }
    if(run==0)
    {
		if(cnt!=0&&cnt%30==0)
		{
			run=1;
			cnt=-1;
		}
		cnt++;       
    }
  }
  if(gui>tu) printf("@_@ %d",gui);
  else if(tu>gui) printf("^_^ %d",tu);
  else printf("-_- %d",gui);
  
  return 0;
}
