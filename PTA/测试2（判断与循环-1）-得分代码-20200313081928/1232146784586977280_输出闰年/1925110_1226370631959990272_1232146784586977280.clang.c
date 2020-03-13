int main()     
{
	int year,i;
      scanf("%d",&year);
        if(year<=2000 || year >2100)
            printf("Invalid year!\n");
              else
                  for(i=2001;i<=year;i++){
                        if((i%4==0&&i%100!=0)||i%400==0)//这里加个括号,注意&&,||, !三个关系运算符
                              //的先后运算顺序
                                      printf("%d\n",i);
                                          }
                                            return 0;  
                                            }