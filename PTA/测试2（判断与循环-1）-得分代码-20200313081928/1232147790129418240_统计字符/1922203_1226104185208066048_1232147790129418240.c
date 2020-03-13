#include <stdio.h>

int main()

{

 char c;

 int letters=0,blank=0,digit=0,other=0;

 printf("请输入一行字符：");

 while ((c=getchar())!='\n')

 {

  if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')

  {

  blank++;

  }

  else if (c == ' ')

  {

  letters++;

  }

  else if (c >= '0'&&c <= '9')

  {

   digit++;

  }

  else

  {

   other++;

  }

 }

 printf("letters=%d,blank=%d,digit=%d,other=%d",letters,blank,digit,other);

 return 0;

}
