#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
  if(n >= 90){printf("A\n");}
if(n >= 80 && n < 90){printf("B\n");}
if(n >= 70 && n < 80){printf("C\n");}
if(n >= 60 && n < 70){printf("D\n");}
if(n < 60){printf("E\n");}
 /*switch (n/10){
        case 10:
        case 9:printf("A\n");break;
   	case 8:printf("B\n");break;
   	case 7:printf("C\n");break;
   	case 6:printf("D\n");break;
   	case 5:printf("E\n");break;
   	case 4:printf("E\n");break;
   	case 3:printf("E\n");break;
   	case 2:printf("E\n");break;
   	case 1:printf("E\n");break;
   	case 0:printf("E\n");break;
}*/
 
   return 0;
}
