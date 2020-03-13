  #include <stdio.h>
  int main()
  {
      int i, j, m, n, flag = 0;
          scanf("%d%d", &m, &n);

               for (i = m; i <= n; i++) {
                       int s = 1;
                               for (j = 2; j <= i / 2; j++)
                                           if (i % j == 0)
                                                           s += j;
                                                                   if (s == i) {
                                                                               flag++;
                                                                                           printf("%d = 1", i);
                                                                                                       for (j = 2; j <= i / 2; j++)
                                                                                                                       if (i % j == 0)  printf(" + %d", j);
                                                                                                                                   printf("\n");
                                                                                                                                           }
                                                                                                                                               }    
                                                                                                                                                   if(!flag)
                                                                                                                                                           printf("None\n");
                                                                                                                                                               return 0;
                                                                                                                                                               }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          