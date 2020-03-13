#include <stdio.h>
#include <math.h>
#define PI 3.141592654
void cal ( int sel);
double vol_ball (void);
double vol_cylind (void);
double vol_cone (void);
int main (void)
{
   int sel;
     while (1) {
        printf (" 1-Ball");
           printf (" 2-Cylinder" );
              printf (" 3-Cone" );
                 printf ("other-Exit\n" );
                    printf("Please enter your command:");
                       scanf ( "% d", &sel);
                          if (sel<1||sel>3)
                                break;
                                   else
                                         cal (sel);
                                           }
                                             return 0;
                                             }
                                             void cal (int sel)
                                             {
                                               switch (sel) {
                                                    case 1:
                                                            printf ( "%.2f\n", vol_ball ());==
                                                                    break;
                                                                         case 2:
                                                                                 printf ("%.2f\n"，vol_cylind () );
                                                                                         break;
                                                                                              case 3 :
                                                                                                      printf ("%.2f\n", vol_cone () );
                                                                                                              break;
                                                                                                                }
                                                                                                                }
                                                                                                                double vol_ball ()
                                                                                                                {
                                                                                                                  double r;
                                                                                                                    printf ( "Please enter the radius:”);
                                                                                                                      scanf ("%1f",&r);
                                                                                                                        return (4.0/3.0*PI*r*r*r);
                                                                                                                        }
                                                                                                                        double vol_cylind()
                                                                                                                        {
                                                                                                                           double h, r;
                                                                                                                              printf("Please enter the radius and the height:");
                                                                                                                                 scanf ("%1f%1f"，&r, &h);
                                                                                                                                    return (PI*r*r*h);
                                                                                                                                    }
                                                                                                                                       double vol_cone ()
                                                                                                                                          double h, r;
                                                                                                                                             printf("Please enter the radius and the height:");
                                                                                                                                                scanf ("%1f%1f"，&r, &h) ;
                                                                                                                                                   return (PI*r*r*h/3.0);
                                                                                                                                                   }