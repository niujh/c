#include <stdio.h>

int main()

{

	int i = 0;

    	int a = 0;

        	scanf("%d",&a);

                    if ((a <= 2000)||(a > 2100))

                            {

                                        printf("Invalid year!");

                                                }

                                                    

                                                            else

                                                                    {

                                                                                if ((a < 2004)&&(a>2000))

                                                                                            {

                                                                                                            printf("None");

                                                                                                                         }

                                                                                                                                 

                                                                                                                                             else

                                                                                                                                                         { 

                                                                                                                                                                       for (i = 2002; i <= a; i++)

                                                                                                                                                                                     {

                                                                                                                                                                                                       if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))

                                                                                                                                                                                                                         {

                                                                                                                                                                                                                                               printf("%d\n", i);

                                                                                                                                                                                                                                               		          }

                                                                                                                                                                                                                                                                 	          }

                                                                                                                                                                                                                                                                                           }

                                                                                                                                                                                                                                                                                                   }

                                                                                                                                                                                                                                                                                                   	return 0;

                                                                                                                                                                                                                                                                                                       }