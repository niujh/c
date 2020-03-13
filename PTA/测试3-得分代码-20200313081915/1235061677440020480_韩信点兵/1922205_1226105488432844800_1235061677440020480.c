#include<stdio.h>
int main()
{
  int i=21;
    while(i)
      {
          if (i%5!=1) i++;
              else {if (i%6!=5) i++;
                        else {if (i%7!=4) i++;
                                        else {if (i%11!=10) i++;
                                                               else break;
                                                                                     }
                                                                                                 
                                                                                                                 }
                                                                                                                       
                                                                                                                                 }
                                                                                                                                     
                                                                                                                                         
                                                                                                                                           }
                                                                                                                                             
                                                                                                                                               /*int i;
                                                                                                                                                 for (i=21;;i++)
                                                                                                                                                   {
                                                                                                                                                       if(i%5==1&&i%6==5&&i%7==4&&i%11==10) break;
                                                                                                                                                           
                                                                                                                                                             }*/
                                                                                                                                                               printf("%d",i);
                                                                                                                                                                 return 0;
                                                                                                                                                                 }
                                                                                                                                                                 