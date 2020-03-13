#include <stdio.h>
int t = 0; 
int main () {
int m,n,i;
void IsPerfectNumber (int number);
scanf("%d%d",&m,&n);
for ( i=m; i<=n; i++){
IsPerfectNumber(i);
}
if(!t){
printf("None\n");
}
return 0;
}
void IsPerfectNumber (int number){ 
void InputPerfectNumber( int number, int last);
int i,sum=0,last;
for ( i=1; i<number; i++){
if ( number%i == 0){
sum += i;
last = i; 
}
}
if ( sum == number){
InputPerfectNumber(number,last);
t = 1;
}
}
void InputPerfectNumber(int number, int last){ 
int i;
printf("%d =",number );
for ( i=1; i<number; i++){
if ( number%i == 0){
printf(" %d",i);
if (i != last) 
printf (" +");
}
}
printf ("\n");
}
