#include<stdio.h>

int main()
{
    int year,a=2001;
    scanf("%d",&year);
    if(year<=2000||year>2100)
    printf("Invalid year!");
    else if(year<2004)
    {printf("None");}
    else
    {for(a;a<=year;a++)
    {
    if(a%400==0)
    {printf("%d\n",a);}
    else if(a%4==0)
    {if(a%100==0)
        break;
     else
        {printf("%d\n",a);} 
    }
    
    }
    }
    return 0;
}