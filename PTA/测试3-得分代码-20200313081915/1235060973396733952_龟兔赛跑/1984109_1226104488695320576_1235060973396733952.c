#include <stdio.h>
int main()
{
int rab=0, tur=0, min, rest=-1, run=10; 
    scanf ("%d",&min) ; 
    while(min--)
	{
        tur += 3;
        if (run-- > 0)
        {
        	rab += 9;
	    } 
        if (run == 0 )
		{           
            if (rab > tur && rest != 0) 
			{
				rest = 30;
			}
			else
			{
				run = 10;
		    }      
        } 
        if (rest-- == 0)
        {
        	 run = 10;
		}                
    }
    if(tur > rab)
    {
    	printf("@_@ %d",tur);
	}
    else if (rab > tur)
    {
    	 printf("^_^ %d",rab);
	}
    else 
    {
    	printf("-_- %d",rab);
	} 
    return 0 ;
}
