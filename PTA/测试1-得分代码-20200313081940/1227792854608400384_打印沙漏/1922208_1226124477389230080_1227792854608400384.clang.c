#include <stdlib.h>
#include <stdio.h>
void create_hourglass(int a[][99]){
    int i,j;
    for (i = 0; i < 50;i++)
        for (j = i; j <99 - i; j++)
            a[i][j] = 1;
}
void print_hourglass(int _hourglass[][99],int _level,char _temp,int _remain){
    int i,j,k,
         flag;                            
    for (j = 50 - _level; j < 50;j++){
         flag = 1;
         for (k = 50 - _level; k < 99 - ( 50 - _level); k++){//99代表沙漏矩阵的列数，50 - _level代表矩阵每行符号后的空格数，不需要输出，所以减去。
              if (_hourglass[j][k]){
                 flag = 0;
                 printf("%c", _temp);
               }
              else{
                 if (flag)
                     printf(" ");
                 else
                     break;
      }
    }
    printf("\n");
  } 
  for (j = 1; j < _level; j++){
    flag = 1;
    for (k = 50 - _level; k < 99 - (50 - _level); k++){
      if (_hourglass[49 - j][k]){
        printf("%c", _temp);
        flag = 0;
      }
      else{
        if (flag)
          printf(" ");
        else
          break;
      }
    }
    printf("\n");
  }
  printf("%d\n",_remain);
}
int main(){
  int hourglass[50][99] = { 0 },
      i, j,k,input,level,remain;
  char temp;
  
  create_hourglass(hourglass);
  scanf("%d %c",&input,&temp);
  for (i = 1; input >( (i * i * 2) - 1); i++);
  if (input == i * i * 2 -1)
    level = i;
  else
    level = i - 1;
  remain = input - 2 * level * level + 1;
 
  print_hourglass(hourglass,level,temp,remain);
  
  return 0;
}
