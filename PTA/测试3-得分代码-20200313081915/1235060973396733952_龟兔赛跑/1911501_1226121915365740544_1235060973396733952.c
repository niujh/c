
 #include<stdio.h> 
 int main() 
 { 
 int time, disrab = 0, distur = 0; 
 int i, rest,run; 
 scanf("%d", &time); 
 rest = 0; 
 run =10; 
 for(i = 0; i<time; i++){ 
 if(run == 0){ 
 run = 10; 
 if(disrab>distur){ 
 rest = 30; 
 } 
 } 
 distur += 3; 
 if(rest == 0 ){ 
 disrab += 9; 
 run--; 
 } 
 if(rest>0){ 
 rest--; 
 } 
 } 
 if(disrab<distur){ 
 printf("@_@ %d",distur); 
 } 
 else if(disrab > distur){ 
 printf("^_^ %d",disrab); 
 } 
 else{ 
 printf("-_- %d",disrab); 
 } 
 return 0; 
 } 