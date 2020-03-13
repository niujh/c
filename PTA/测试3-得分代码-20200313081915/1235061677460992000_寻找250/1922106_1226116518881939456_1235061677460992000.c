#include<iostream>
#include<cmath> 
#include<cstring>   
using namespace std;
int f[100000];
int main()
{
  int a, k = 0;
    while (scanf("%d", &a) != EOF)
      {
          f[k++] = a;
            }
              for (int i = 0; i<k; i++)
                {
                    if (f[i] == 250)
                        {
                              printf("%d\n", i + 1);
                                    break;
                                        }
                                          }
                                            return 0;
                                            }
                                            