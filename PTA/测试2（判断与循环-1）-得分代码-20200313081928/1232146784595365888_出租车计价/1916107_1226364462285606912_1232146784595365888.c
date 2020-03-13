#include <stdio.h>

int main()
{
  double miles;
  int minutes;
  double fees=0;

  if(scanf("%lf %d", &miles, &minutes) == 2)
  {
    if      (miles>=0 && miles<=3)  fees = 10;
    else if (miles>3  && miles<=10) fees = 10 + (miles - 3) * 2;
    else if (miles>10)              fees = 10 + (10    - 3) * 2 + (miles - 10) * 3;

    if(minutes>=5)  fees += minutes / 5 * 2;

    printf("%d", (int)fees);
  }

  return 0;
}
