#include <stdio.h>
#include <math.h>
 
int main(void)
{
    double mile,pay,pay_part1,pay_part2;
    int wait;
 
    scanf("%lf %d",&mile,&wait);
    
    if(mile<=3)
		pay_part1=10;
    else if(mile<=10)
		pay_part1=10+(mile-3)*2;
   	else 
		pay_part1=10+(10-3)*2+(mile-10)*3;
    pay_part2=floor(wait*1.0/5)*2;
    pay=round(pay_part1+pay_part2);
    
    printf("%.lf\n",pay);
    
    return 0;
}
